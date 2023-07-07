// write a c program to check a year is leap year or not

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
    
    ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf("%d is a leap year\n", year) : printf("%d is not a leap year\n", year);

    switch((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        case 1:
            printf("%d is a leap year\n", year);
            break;
        case 0:
            printf("%d is not a leap year\n", year);
            break;
    }
    
    return 0;
}