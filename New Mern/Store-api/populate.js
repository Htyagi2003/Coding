 import 'dotenv/config'
import connectdb from './DB/connectdb.js';
import product from './models/product.js';
import jsonProduct from "./products.json" assert {type:"json"}
import { json } from 'express';

 
 const insertproduct = async()=>{
    try {
        await connectdb(process.env.MONGO_URL);
        await product.deleteMany();
        await product.create(jsonProduct)
        console.log("product inserted successfuly");
        process.exit(0);
    } catch (error) {
        console.log(error)
        
    }
 }
 insertproduct();