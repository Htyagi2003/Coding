const a = (msg) => {
       document.getElementById('add').innerHTML="Hello"+msg;
       
};

console.log('Harsh Tyagi');
var date =new Date();
console.log(date.getDay())
console.log(date.getDate())
console.log(date.getMonth())
console.log(date.getTime())
 var weel={
        0:"S",
        1:"Monday",
        2:"T",
        3:"W",
        4:"TH",
        5:"F",
        6:"sat"
 }
 console.log("Today is : "+ weel[date.getDay()]);
 console.log("Today's date is : "+ date.getDate()+" "+date.getMonth()+ " "+ date.getFullYear());
