import { useState } from "react";
import "./App.css";
const App = () => {
  const [count, setcount] = useState(0);
  return (
    <>
      {" "}
      <div className="my-class">
        <button
          className="btn"
          onClick={() => {
            setcount(count + 1);
          }}
        >
          +
        </button>
        <h1>{count}</h1>
        <button
          className="btn"
          onClick={() => {
            setcount(count - 1);
          }}
        >
          -
        </button>
      </div>
    </>
  );
};
export default App;
