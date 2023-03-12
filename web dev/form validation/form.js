// function validation(){
//     var x = document.f1.user.value;
//     var y = document.f1.pass.value;
//     var z = document.f1.passc.value;
//     var a = document.f1.email.value;
//     var b = document.f1.phone.value;
//     var flag=1
//     if(x==""||y==""||z==""||a==""||b==""){
//         document.getElementById("para").innerText="This Should not be empty";
//         flag=0
        
//     }

//     return false
// }
const employe={
    empid:101,
    empid2:102,
    empid3:103,
    empid4:104,
    fullname:function(){
        return this.empid+this.empid3
    }
}
console.log(employe.fullname())
// write a program to create an object claled person with property first last name adrees age and genders and a member function which will return full name with 
const person={
   firstname:"HARSH",
   lastname:"TYAGI",
   adress:"HAPUR",
   age:"20",
   gender:"MALE",
    fullname:function(){
        return this.firstname+" "+this.lastname+" "+this.adress
    }
}
console.log(person.fullname())
function contruc(name,age){
    this.name=name;
    this.age=age;
}
let obj =new contruc("Harsh",90);
console.log(obj.age,obj.name);
function car(x,y,z,n){
    this.name=x;
    this.model=y;
    this.year=z;
    this.owner=n;
}
const car1=new car('Supra',1990,2002,obj)
console.log(car1)
console.log(car1.owner.name)
let car3=  {
    name: 'Supra',
    model: 1990,
    year: 2002,
    get id(){
        return this.name;
    }
  }
  console.log(car3.name)
  console.log(car3["name"])
  console.log(car3.id)
  //write a java script program to create an employee object that must include an normal function which is ude to retrurn employye name and a getter method which is used to return id
  const employe2={
    empname:'HArsh',
    empid:102,
    getid:function(){
        return this.empid;
    },
    get id(){
        return this.empid
    }
}
console.log(employe2.id)
console.log(employe2.getid)
const compare=(a,b)=>{
    return a-b;
}
const arr=[10,20,30,40,50,'Harsh']
const arr1=[10,100,20,25,50]
console.log(arr1.sort(compare))
const compare2=(a,b)=>{
    if(a.name>b.name)
    return 1;
    else if(a.name<b.name)
    return -1
    else 
    return 0;
}
const compare3=(a,b)=>{
    return a.age-b.age;
}
const arr3=[{name:"ram",age:19},
{name:"geeta",age:40},{name:"rohit",age:9}
]
console.log(arr3.sort(compare2))
console.log(arr3.sort(compare3))
class Teacher{
    constructor(x,y){
       this.name=x;
       this.age=y;
    }
    get id(){
        return this.name
    }
    // set a(){
    //     this.age=20
    // }
    display() {
        console.log(this.name+ " "
        + this.age)
    }
};
//write a program using java script for web page to display browseer infortion
// window->navigator have these propterties->cookie Enabled,appcodeNam app version,`javaenabled,online,
function dis(){
    document.write(window.navigator.cookieEnabled +"<br/>")
    
    document.write(window.navigator.onLine +"<br/>")
    document.write(window.navigator.language +"<br/>")
    document.write(window.navigator.appName +"<br/>")
    document.write(window.navigator.platform +"<br/>")
    document.write(window.navigator.appVersion +"<br/>")
    document.write(window.navigator.product +"<br/>")
}
// write ajava script programe using window object try to open a new document and print a new document
function pri(){
    window.print()
    
}
function openi(){
    window.open("form.html")
}
const dat=()=>{
    const obj=new Date()
    document.write(obj.getDate()+obj.getMonth()+obj.getFullYear())
}
const time1=()=>{
    const obj=new Date()
    document.write(obj)
    document.write(obj.getHours()+obj.getMinutes()+obj.getSeconds())
}