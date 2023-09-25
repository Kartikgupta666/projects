function printiL() {
    
    var textarea = document.getElementById("wefield");
    var listItem = "<li></li>";
    textarea.value +=listItem;

}
function printli() {
    
    var textarea = document.getElementById("aqfield");
    var listItem = "<li></li>";
    textarea.value +=listItem;

}


// generating cv

function generateCV(){
// console.log("generating CV");
let nameField=document.getElementById("nameField").value;
let nameT1=document.getElementById("nameT1");
nameT1.innerHTML = nameField;

//direct
document.getElementById("nameT2").innerHTML=nameField
// contact
let contactField=document.getElementById("contactField").value;
contactT.innerHTML=contactField;
//Adderss
let AdderssField=document.getElementById("AddressField").value;
addressT.innerHTML=AdderssField;
//facebook
document.getElementById("fbT").innerHTML=document.getElementById("fbField").value;
// insta
document.getElementById("instaT").innerHTML=document.getElementById("InstaField").value;
// linkin
document.getElementById("linkT").innerHTML=document.getElementById("LinkField").value;


// objective
document.getElementById("objectiveT").innerHTML=document.getElementById("objectiveField").value;

// we
document.getElementById("weT").innerHTML=document.getElementById("wefield").value;


// aq
document.getElementById("aqT").innerHTML=document.getElementById("aqfield").value;

// profile photo code
let file=document.getElementById('imgfield').files[0]

console.log(file);

let reader=new FileReader();

reader.readAsDataURL(file);

console.log(reader.result);

// set the img to template 

reader.onloadend=function() {
    document.getElementById('imgT').src = reader.result;
};

 document.getElementById("cv-form").style.display="none"
  document.getElementById("CV-Tmplat").style.display="block"
  
}

// print cv
function printCV() {
    window.print();
   
}
