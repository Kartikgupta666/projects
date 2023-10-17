function appendtodisplay(value) {
const display = document.getElementById('number');
display.value +=value;
}

function clearDisplay() {
    const display = document.getElementById('number');
    const check = document.getElementById('result');
    check.value = ''; 
    display.value = '';
  }

function check(){
    let display = document.getElementById('number');
    var result = document.getElementById("result");
    if(display.value % 2 == 0 ){
        result.value = "EVEN";
    }
else {
    result.value = "ODD";
}

}