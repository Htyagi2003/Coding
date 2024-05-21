import product from "../models/product.js";

export const getAllproductsStatic= async(req,res)=>{


    try {
        
        const prds=await product.find().sort("name -price");
        res.status(200).json({nbhits:prds.length, data:prds});
        
    } catch (error) {
        console.log(error)

        
    }

}


export const getAllproducts= async(req,res)=>{
    try {

        console.log(req.query);
        const queryLink={}
        const {featured,company,name,sort}=req.query;
        if(featured){
            queryLink.featured=featured==='true'?true:false
        }
        if(company){
            queryLink.company=company;
        }
        if(name){
            queryLink.name=name;

        }

        let result= product.find(queryLink);
        let final=[];
        if(sort){
            const sortedlist=sort.split(',');
            
            final=sortedlist.map((item)=>item.trim());
            final=final.join(" ");
            result=result.sort(final)
        }
        else{
            result=result.sort("createdAt");
        }


        const prds=await result;
        res.status(200).json({nbHits:prds.length,data:prds})
        
    } catch (error) {
        console.log(error)
        
    }


   
}
