import Book from "./Book";
import { books } from "./data";
const Booklist = () => {
  return (
    <section className="booklist">
      {books.map((item, index) => {
        return <Book key={index} {...item} />;
      })}
    </section>
  );
};
export default Booklist;
