import { useEffect, useState } from "react";
import axios from "axios";
import SERVER_URL from "../Serverurl";
import { useNavigate } from "react-router-dom";
import { useParams } from "react-router-dom";

const Editstudent = () => {
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
  const handleupdate = async () => {
    try {
      const data = { title, author, year };
      setLoading(true);
      const resp = await axios.put(`${SERVER_URL}/book/${id}`, data);
      console.log(resp.data);
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
      <h1 className="text-3xl bg-red-700 text-white p-4 text-center">
        Update Student Details
      </h1>
      {loading ? <h2>Loading....</h2> : ""}
      <div className="flex flex-col border-2 border-red-200 rounded-sm w-[600px] p-4 mx-auto my-4">
        <div className="my-4 ">
          <label className="text-xl mr-4 text-grey-400">
            Name of The Student
          </label>
          <input
            type="text"
            value={author}
            onChange={(e) => setauthor(e.target.value)}
            className="border-2 border-red-400 px-4 py-2 w-full "
          />
        </div>
        <div className="my-4 ">
          <label className="text-xl mr-4 text-grey-400">Class</label>
          <input
            type="text"
            value={title}
            onChange={(e) => settitle(e.target.value)}
            className="border-2 border-red-400 px-4 py-2 w-full"
          />
        </div>
        <div className="my-4 ">
          <label className="text-xl mr-4 text-grey-400">Total Marks</label>
          <input
            type="text"
            value={year}
            onChange={(e) => setyear(e.target.value)}
            className="border-2 border-red-400 px-4 py-2 w-full "
          />
        </div>
        <button
          className="p-2 bg-red-600 text-white rounded-sm"
          onClick={handleupdate}
        >
          Update Details
        </button>
      </div>
    </>
  );
};
export default Editstudent;
