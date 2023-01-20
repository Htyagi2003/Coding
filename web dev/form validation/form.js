function validation(){
    var x = document.f1.user.value;
    var y = document.f1.pass.value;
    var z = document.f1.passc.value;
    var a = document.f1.email.value;
    var b = document.f1.phone.value;
    var flag=1
    if(x==""||y==""||z==""||a==""||b==""){
        document.getElementById("para").innerText="This Should not be empty";
        flag=0
        
    }

    return false
}