function isLeapYear(y){
    if((((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))){
        console.log("Leap Year");
    }else{
        console.log("Not Leap Year");
    }

    ((((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))) ? console.log("Leap Year") : console.log("Not Leap Year");
}

isLeapYear(2016);
isLeapYear(2012);
isLeapYear(2022);
