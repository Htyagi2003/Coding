import express from 'express'
import { getAllproducts, getAllproductsStatic } from '../controllers/productcontroller.js';
const productRouter =express.Router();
productRouter.route("/").get(getAllproducts);
productRouter.route("/static").get(getAllproductsStatic);

export default productRouter;