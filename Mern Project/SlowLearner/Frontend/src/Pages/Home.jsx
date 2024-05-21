import axios from "axios"; // to hit api of backend
import { useEffect, useState } from "react"; // to rendor the componenty/ data /page
import SERVER_URL from "../Serverurl";
import { FcInfo } from "react-icons/fc";
import { TbDatabaseSearch } from "react-icons/tb";
import { MdDelete } from "react-icons/md";
import { MdLibraryAdd } from "react-icons/md";
import { Link } from "react-router-dom";

//Home is component
const Home = () => {
  const [books, setBooks] = useState([]); //array objects can store array objects
  const [loading, setLoading] = useState(false); // to show loading of page
  const fetchBook = async () => {
    try {
      setLoading(true);
      const resp = await axios.get(`${SERVER_URL}/book`);
      console.log(resp.data);
      setBooks(resp.data.data);
      setLoading(false);
    } catch (error) {
      console.log(error);
      setLoading(false);
    }
  };
  useEffect(() => {
    fetchBook();
  }, []);
  return (
    <>
      <div className="bg-blue-300">
        <h1 className="text-5xl bg-red-700 text-black p-4 text-center ">
          STUDENT DETAILS
        </h1>
        <div className="p-4">
          <Link to="/books/Create">
            <MdLibraryAdd className="text-2xl" />
          </Link>
          <div className="flex justify-between items-center">
            {loading ? (
              <h3>Loading....</h3>
            ) : (
              <table className="border-t-4 w-full border-separate border-spacing-1  bg-red-100">
                <thead>
                  <tr>
                    <th className="border-2 bg-red-500 rounded-md border-black">
                      Serial No.
                    </th>
                    <th className="border-2 bg-red-500 rounded-md  border-black">
                      Student Name
                    </th>
                    <th className="border-2 bg-red-500 rounded-md  border-black">
                      Class
                    </th>
                    <th className="border-2 bg-red-500 rounded-md  border-black">
                      Total Marks
                    </th>
                    <th className="border-2 bg-red-500 rounded-md  border-black">
                      option
                    </th>
                  </tr>
                </thead>
                <tbody>
                  {books.map((books, index) => {
                    return (
                      <tr key={books._id}>
                        <td className="border border-slate-500 rounded-md text-center">
                          {index + 1}
                        </td>
                        <td className="border border-slate-500 rounded-md text-center">
                          {books.author}
                        </td>
                        <td className="border border-slate-500 rounded-md text-center">
                          {books.title}
                        </td>
                        <td className="border border-slate-500 rounded-md text-center">
                          {books.year}
                        </td>
                        <td className="border border-slate-500 rounded-md text-center">
                          <div className="flex justify-center gap-x-4 p-2">
                            <Link to={`/books/${books._id}`}>
                              <FcInfo className="bg-sky-700 text-2xl" />
                            </Link>
                            <Link to={`/books/edit/${books._id}`}>
                              <TbDatabaseSearch className="bg-green-700 text-2xl" />
                            </Link>
                            <Link to={`/books/Delete/${books._id}`}>
                              <MdDelete className="bg-red-700 text-2xl" />
                            </Link>
                          </div>
                        </td>
                      </tr>
                    );
                  })}
                </tbody>
              </table>
            )}
          </div>
        </div>
      </div>
    </>
  );
};
export default Home;
