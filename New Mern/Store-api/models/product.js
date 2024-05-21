import mongoose from "mongoose";
const productSchema=mongoose.Schema({
  name:{
    type:String,
    required:[true,'please enter Product Names']
  },
  price:{
    type:Number,
    required:[true,'please enter Price']
  },
  featured:{
    type:Boolean,
    default:false
  },
  rating:{
    type:Number,
    default:4.5
  }
  ,
  createdAt:{
    type:Date,
    default:Date.now()
  },
  company:{
    type:String,
    enum:{
        values:['ikea','nilkamal','durian','pepperfry'],
        message:"{Values} is not supported"
    }
  }
});
export default mongoose.model("product",productSchema);