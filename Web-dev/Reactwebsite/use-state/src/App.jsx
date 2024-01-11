import { useState } from "react";

const App = () => {
  const [count, setCount] = useState(0);
  const add1 = () => {
    setCount(count + 5);
  };
  const sub1 = () => {
    setCount(count - 1);
  };
  return (
    <>
      <button onClick={add1}> Click for +5 </button>
      <h2>You have Clicked {count} times</h2>
      <button onClick={sub1}> Click fro -1 </button>
    </>
  );
};
export default App;
