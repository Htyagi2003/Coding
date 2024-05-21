import { useState } from "react";
import axios from "axios";
import SERVER_URL from "../Serverurl";
import { useNavigate } from "react-router-dom";

const AddBook = () => {
  const [loading, setLoading] = useState(false);
  const [title, settitle] = useState("");
  const [author, setauthor] = useState("");
  const [year, setyear] = useState("");
  const navigate = useNavigate();
  const handlesave = async () => {
    try {
      const data = { title, author, year };
      setLoading(true);
      const resp = await axios.post(`${SERVER_URL}/book`, data);
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
      <h1 className="text-3xl bg-sky-700 text-white p-4 text-center">
        Add New Book
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
          />
        </div>
        <div className="my-4 ">
          <label className="text-xl mr-4 text-grey-400">Author</label>
          <input
            type="text"
            value={author}
            onChange={(e) => setauthor(e.target.value)}
            className="border-2 border-gray-400 px-4 py-2 w-full "
          />
        </div>
        <div className="my-4 ">
          <label className="text-xl mr-4 text-grey-400">Year</label>
          <input
            type="text"
            value={year}
            onChange={(e) => setyear(e.target.value)}
            className="border-2 border-gray-400 px-4 py-2 w-full "
          />
        </div>
        <button
          className="p-2 bg-sky-600 text-white rounded-sm"
          onClick={handlesave}
        >
          Save
        </button>
      </div>
    </>
  );
};
export default AddBook;
