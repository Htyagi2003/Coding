import { Route, Routes } from "react-router-dom";
import Home from "./Pages/Home";
import Addstudent from "./Pages/Addstudent";
import Editstudent from "./Pages/Editstudent";
import Deletestudent from "./Pages/Deletestudent";
import Showstudent from "./Pages/Showstudent";

const App = () => {
  return (
    <Routes>
      <Route path="/" element={<Home />}></Route>
      <Route path="/books/Create" element={<Addstudent />}></Route>
      <Route path="/books/edit/:id" element={<Editstudent />}></Route>
      <Route path="/books/Delete/:id" element={<Deletestudent />}></Route>
      <Route path="/books/:id" element={<Showstudent />}></Route>
    </Routes>
  );
};
export default App;
