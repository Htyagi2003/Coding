import { Link } from "react-router-dom";
import { IoArrowBackCircleOutline } from "react-icons/io5";

const BackButton = ({ destination = "/" }) => {
  return (
    <div className="flex justify-center items-center">
      <Link
        to={destination}
        className="bg-sky-400 text-white p-4 py-1 rounded-lg w-full"
      >
        <IoArrowBackCircleOutline />
      </Link>
    </div>
  );
};
export default BackButton;
