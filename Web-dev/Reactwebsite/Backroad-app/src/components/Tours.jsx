import img1 from "../assets/images/tour-1.jpeg";
import img2 from "../assets/images/tour-2.jpeg";
import img3 from "../assets/images/tour-3.jpeg";
import img4 from "../assets/images/tour-4.jpeg";
import img5 from "../assets/images/tour-5.jpeg";
import img6 from "../assets/images/tour-6.jpeg";
const Tours = () => {
  return (
    <>
      <section class="section" id="tours">
        <div class="section-title">
          <h2>
            featured <span>tours</span>
          </h2>
        </div>

        <div class="section-center featured-center">
          <article class="tour-card">
            <div class="tour-img-container">
              <img src={img1} class="tour-img" alt="" />
              <p class="tour-date">august 26th, 2020</p>
            </div>
            <div class="tour-info">
              <div class="tour-title">
                <h4>Tibet Adventure</h4>
              </div>
              <p>
                Lorem ipsum dolor sit amet, consectetur adipisicing elit. Cumque
                vitae tempore voluptatum maxime reprehenderit eum quod
                exercitationem fugit, qui corporis.
              </p>
              <div class="tour-footer">
                <p>
                  <span>
                    <i class="fas fa-map"></i>
                  </span>{" "}
                  china
                </p>
                <p>6 days</p>
                <p>from $2100</p>
              </div>
            </div>
          </article>

          <article class="tour-card">
            <div class="tour-img-container">
              <img src={img2} class="tour-img" alt="" />
              <p class="tour-date">october 1th, 2020</p>
            </div>
            <div class="tour-info">
              <h4>best of java</h4>
              <p>
                Lorem ipsum dolor sit amet, consectetur adipisicing elit. Cumque
                vitae tempore voluptatum maxime reprehenderit eum quod
                exercitationem fugit, qui corporis.
              </p>
              <div class="tour-footer">
                <p>
                  <span>
                    <i class="fas fa-map"></i>
                  </span>{" "}
                  indonesia
                </p>
                <p>11 days</p>
                <p>from $1400</p>
              </div>
            </div>
          </article>

          <article class="tour-card">
            <div class="tour-img-container">
              <img src={img3} class="tour-img" alt="" />
              <p class="tour-date">september 15th, 2020</p>
            </div>
            <div class="tour-info">
              <h4>explore hong kong</h4>
              <p>
                Lorem ipsum dolor sit amet, consectetur adipisicing elit. Cumque
                vitae tempore voluptatum maxime reprehenderit eum quod
                exercitationem fugit, qui corporis.
              </p>
              <div class="tour-footer">
                <p>
                  <span>
                    <i class="fas fa-map"></i>
                  </span>{" "}
                  hong kong
                </p>
                <p>8 days</p>
                <p>from $5000</p>
              </div>
            </div>
          </article>

          <article class="tour-card">
            <div class="tour-img-container">
              <img src={img4} class="tour-img" alt="" />
              <p class="tour-date">december 5th, 2019</p>
            </div>
            <div class="tour-info">
              <h4>kenya highlights</h4>
              <p>
                Lorem ipsum dolor sit amet, consectetur adipisicing elit. Cumque
                vitae tempore voluptatum maxime reprehenderit eum quod
                exercitationem fugit, qui corporis.
              </p>
              <div class="tour-footer">
                <p>
                  <span>
                    <i class="fas fa-map"></i>
                  </span>{" "}
                  kenya
                </p>
                <p>20 days</p>
                <p>from $3300</p>
              </div>
            </div>
          </article>
        </div>
      </section>
    </>
  );
};
export default Tours;
