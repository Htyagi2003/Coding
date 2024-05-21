import express from "express";
import 'dotenv/config'
import connectdb from "./DB/connectdb.js";
import productRouter from "./Routes/productrouter.js";
const app=express();


//routes
app.get("/",(req,res)=>{
    res.send("<h1>Welcome to Store Api</h1>");
});

//this is for the products routes
app.use("/api/v1/products",productRouter);


const PORT=process.env.PORT||3000;




;(async()=>{
    try {
        await connectdb(process.env.MONGO_URL);
        console.log("Database is connected");
        app.listen(PORT,()=>{
            console.log(`server is running at port ${PORT}`);
        });

        
    } catch (error) {
        console.log('Error :',error)
        
    }

})();
