// check a year is leap year or not

// Method 1
#include<stdio.h>
int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 40 == 0) printf("%d is a leap year", year);
            else printf("%d is not a leap year", year);
        }else printf("%d is a leap year", year);
    }
    else printf("%d is not a leap year", year);
    return 0;
}

// Method 2
#include<stdio.h>
int main(){
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) printf("%d is a leap year", year);
    else printf("%d is not a leap year", year);
    return 0;
}

/*
year = 2023

((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
((2023 % 4 == 0 && 2023 % 100 != 0) || (2023 % 400 == 0))
((3 == 0 && 23 != 0) || (23 == 0))
((false && true) || false)
(false || false)
false

= 2023 is not a leap year.

year = 2012

((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
((2012 % 4 == 0 && 2012 % 100 != 0) || (2012 % 400 == 0))
((0 == 0 && 12 != 0) || (12 == 0))
((true && true) || false)
(true || false)
true

= 2012 is a leap year.
*/