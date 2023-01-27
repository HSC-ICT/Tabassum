// # find a year is leap year or not using function

#include <stdio.h>

// void calcLeapYear(int year){
//     if(year % 4 == 0){
//         if(year % 100 == 0){
//             if(year % 400 == 0){
//                 printf("Leap Year");
//             }else{
//                 printf("Not Leap Year");
//             }
//         }else{
//             printf("Leap Year");
//         }
//     }else{
//         printf("Not Leap Year");
//     }
// }

// void calcLeapYear(int year){
//     if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
//         printf("Leap Year");
//     }else{
//         printf("Not Leap Year");
//     }
// }

// int calcLeapYear(int year){
//     if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
//         return 1;
//     }else{
//         return 0;
//     }
// }

bool calcLeapYear(int year){
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
        return true;
    }else{
        return false;
    }
}

int main(){
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if(calcLeapYear(year)) printf("Leap Year\n");
    else printf("Not Leap Year\n");
}