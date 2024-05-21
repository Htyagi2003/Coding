const add=()=>{
   a=parseInt(document.getElementById("t1").value)
   b=parseInt(document.getElementById("t2").value)
   document.getElementById("sp").innerHTML=a+b;
}
const sub=()=>{
   a=parseInt(document.getElementById("t1").value)
   b=parseInt(document.getElementById("t2").value)
   document.getElementById("sp").innerHTML=a-b;
}
const mul=()=>{
   a=parseFloat(document.getElementById("t1").value)
   b=parseFloat(document.getElementById("t2").value)
   document.getElementById("sp").innerHTML=a*b;
}
const div=()=>{
   a=parseInt(document.getElementById("t1").value)
   b=parseInt(document.getElementById("t2").value)
   document.getElementById("sp").innerHTML=a/b;
}
const ab=()=>{
   a=parseInt(document.getElementById("t1").value)
   document.getElementById("sp").innerHTML=Math.abs(a);
}
const fl=()=>{
   a=parseInt(document.getElementById("t1").value)
   document.getElementById("sp").innerHTML=Math.floor(a);
}
