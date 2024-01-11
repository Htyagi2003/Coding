// import reactLogo from "./assets/react.svg";
import About from "./components/About";
import Aboutus from "./components/Aboutus";
import Hero from "./components/Hero";
import Navbar from "./components/Navbar";
import Services from "./components/Services";
import Tours from "./components/Tours";
import Footer from "./components/Footer";

function App() {
  return (
    <>
      <Navbar />
      <Hero />
      <About />
      <Services />
      <Tours />
      <Footer />
      <Aboutus />

      <script src="./js/app.js"></script>
    </>
  );
}

export default App;
