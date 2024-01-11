function a(){
    let k=1;
    for(var i=1;i<=5;i++){
        setTimeout(function b(){
        console.log(k);
        k++;
    }
    ,i*1000)
    };
}
a();
var n=function (){
    console.log("Hello world")
}
