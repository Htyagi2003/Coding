let inputfield=document.getElementById('inputfield');
let add=document.getElementById('add');
let todoc=document.getElementById('todoc');



add.addEventListener('click',function(){
    var para=document.createElement('p');
    para.innerHTML=inputfield.value;
    para.classList.add('paragraph')
    todoc.appendChild(para)
    inputfield.value=''
    para.addEventListener('click',function(){
        para.style.textDecoration='line-through';
    })
    para.addEventListener('dblclick',function(){
        todoc.removechlid(para);
    })
})