function login() {
    document.getElementById("login").style.display="none";
    document.getElementById("main").style.display="block";
    let name = document.getElementById("name").value;
    let name1 = document.getElementById("name1");
    name1.innerHTML = name;

    let branch = document.getElementById("branch").value;
    let branch1 = document.getElementById("branch1");
    branch1.innerHTML = branch


    let course = document.getElementById("course").value;
    let course1 = document.getElementById("course1");
    course1.innerHTML = course

    let roll_no = document.getElementById("roll_no").value;
    let roll_no1 = document.getElementById("roll_no1");
    roll_no1.innerHTML = roll_no

   
}



function ret() {
    document.getElementById("main").style.display="none";
    document.getElementById("login").style.display="block";
}