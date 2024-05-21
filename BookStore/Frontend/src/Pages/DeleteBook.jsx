import { useEffect, useState } from "react";
import axios from "axios";
import SERVER_URL from "../Serverurl";
import { useNavigate } from "react-router-dom";
import { useParams } from "react-router-dom";

const DeleteBook = () => {
  const [loading, setLoading] = useState(false);
  const [title, settitle] = useState("");
  const [author, setauthor] = useState("");
  const [year, setyear] = useState("");
  const navigate = useNavigate();
  const { id } = useParams();

  const fetchbook = async () => {
    try {
      setLoading(true);
      const resp = await axios.get(`${SERVER_URL}/book/${id}`);
      console.log(resp.data.data.author);
      setauthor(resp.data.data.author);
      settitle(resp.data.data.title);
      setyear(resp.data.data.year);
      setLoading(false);
    } catch (error) {
      console.log(error);
      setLoading(false);
    }
  };
  useEffect(() => {
    fetchbook();
  }, []);
  const handledelete = async () => {
    try {
      const data = { title, author, year };
      setLoading(true);
      const resp = await axios.delete(`${SERVER_URL}/book/${id}`);
      setLoading(false);
      navigate("/");
      console.log(data);
    } catch (error) {
      console.log(error);
      setLoading(false);
      navigate("/");
    }
  };
  return (
    <>
      <h1 className="text-3xl bg-sky-700 text-white p-4 text-center">
        Delete A Book
      </h1>
      {loading ? <h2>Loading....</h2> : ""}
      <div className="flex flex-col border-2 border-sky-200 rounded-sm w-[600px] p-4 mx-auto my-4">
        <div className="my-4 ">
          <label className="text-xl mr-4 text-grey-400">Title</label>
          <input
            type="text"
            value={title}
            onChange={(e) => settitle(e.target.value)}
            className="border-2 border-gray-400 px-4 py-2 w-full"
            readOnly
          />
        </div>
        <div className="my-4 ">
          <label className="text-xl mr-4 text-grey-400">Author</label>
          <input
            type="text"
            value={author}
            onChange={(e) => setauthor(e.target.value)}
            className="border-2 border-gray-400 px-4 py-2 w-full "
            readOnly
          />
        </div>
        <div className="my-4 ">
          <label className="text-xl mr-4 text-grey-400">Year</label>
          <input
            type="text"
            value={year}
            onChange={(e) => setyear(e.target.value)}
            className="border-2 border-gray-400 px-4 py-2 w-full "
            readOnly
          />
        </div>
        <button
          className="p-2 bg-sky-600 text-white rounded-sm"
          onClick={handledelete}
        >
          Yes Delete it
        </button>
      </div>
    </>
  );
};
export default DeleteBook;
