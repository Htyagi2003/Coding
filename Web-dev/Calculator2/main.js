function myFunction(event) {
  if (
    event.key == "0" ||
    event.key == "1" ||
    event.key == "2" ||
    event.key == "3" ||
    event.key == "4" ||
    event.key == "5" ||
    event.key == "6" ||
    event.key == "7" ||
    event.key == "8" ||
    event.key == "9" ||
    event.key == "+" ||
    event.key == "-" ||
    event.key == "*" ||
    event.key == "/" ||
    event.key == "%" ||
    event.key == "."
  ) {
    document.querySelector("input").value += event.key;
  } else if (event.key == "Backspace" || event.key == "Delete") {
    back();
  } else if (event.key == "Enter") {
   solve();
  }else if (event.key == "c") {
    clr();
   }

}


const solve=()=>{


    try {
        let x=document.querySelector("input").value
        let y=eval(x);
        document.querySelector("input").value=y;
    } catch (error) {
        console.log(error)
        document.querySelector("input").value="Invalid Expression"
        
    }
}


const clr=()=>{
  document.querySelector("input").value = "";

}

const back=()=> {
  let x = document.querySelector("input").value;
  let y = x.slice(0, -1);
  document.querySelector("input").value = y;
}

const display=(val)=>{
    document.querySelector("input").value+=val
}
function dark() {
  var element = document.body;
  element.classList.toggle("dark-mode");
  document.getElementById("dark").classList.toggle("dark_icon");

 
}

function darkicon() {
  document.getElementById("dark").classList.remove("light_icon");
  document.getElementById("dark").classList.add("dark_icon");

}

function color_change(){
  let x = document.getElementById("color").value
  document.getElementsByClassName("container").style.background = x

}

// let n=780
// let f=1;
// let arr=[]
// for(let i=0;i<n;i++){
//   arr[i]=i+1
//   f*=i+1;
// }
// console.log(f,arr.reduce((a,b)=>{
//     return a*b
// }))