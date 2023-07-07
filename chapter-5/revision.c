#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void calculateEvenOdd(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d is even\n", num) : printf("%d is odd\n", num);
}

void calculatePositiveNegative(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num > 0){
        printf("%d is positive\n", num);
    }else if(num < 0){
        printf("%d is negative\n", num);
    }else{
        printf("%d is zero\n", num);
    }
}

void calculatePrime(){
    int n, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i <= n / 2; i++){
        if(n % i == 0){
            flag = 1;
            break;
        }
    }

    switch(flag){
        case 0:
            printf("%d is a prime number\n", n);
            break;
        case 1:
            printf("%d is not a prime number\n", n);
            break;
    }
}

void calculateLeapYear(){
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);
}

void printMultiplicationTable(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", n, i, n * i);
}

void calculateGrade(){
    // int mark;

    // printf("Enter your mark: ");
    // scanf("%d", &mark);

    // if(mark >= 80 && mark <= 100)
    //     printf("Your grade is A+\n");
    // else if(mark >= 70 && mark <= 79)
    //     printf("Your grade is A\n");
    // else if(mark >= 60 && mark <= 69)
    //     printf("Your grade is A-\n");
    // else if(mark >= 50 && mark <= 59)
    //     printf("Your grade is B\n");
    // else if(mark >= 40 && mark <= 49)
    //     printf("Your grade is C\n");
    // else if(mark >= 33 && mark <= 39)
    //     printf("Your grade is D\n");
    // else if(mark >= 0 && mark <= 32)
    //     printf("Your grade is F\n");
    // else
    //     printf("Invalid mark\n");



    char input[100];

    printf("Enter your mark: ");
    scanf("%s", input); // 100 --> "100"

    char ch[10] = "Tabassum\0";
    int i;
    for (i = 0; input[i] != '\0'; i++) {
        if (!isdigit(input[i])) {
            printf("Invalid mark - must be between 0 and 100\n");
            exit(0);
        }
    }

    int marks = atoi(input);
    if(marks >= 0 && marks <= 100){
        if(marks >= 80 && marks <= 100){
            printf("Your grade is A+\n");
        }else if(marks >= 70 && marks <= 79){
            printf("Your grade is A\n");
        }else if(marks >= 60 && marks <= 69){
            printf("Your grade is A-\n");
        }else if(marks >= 50 && marks <= 59){
            printf("Your grade is B\n");
        }else if(marks >= 40 && marks <= 49){
            printf("Your grade is C\n");
        }else if(marks >= 33 && marks <= 39){
            printf("Your grade is D\n");
        }else{
            printf("Your grade is F\n");
        }
    }else{
        printf("Invalid mark - must be between 0 and 100\n");
    }
}

void calculator(){
    char op;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);

    switch(op){
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", n1, n2, n1 * n2);
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf\n", n1, n2, n1 / n2);
            break;
        default:
            printf("Error! operator is not correct\n");
    }
}

void calculateLargestNumber(){
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b && a > c)
        printf("%d is the largest number\n", a);
    else if(b > a && b > c)
        printf("%d is the largest number\n", b);
    else
        printf("%d is the largest number\n", c);
}

void calculateSmallestNumber(){
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a < b && a < c)
        printf("%d is the smallest number\n", a);
    else if(b < a && b < c)
        printf("%d is the smallest number\n", b);
    else
        printf("%d is the smallest number\n", c);
}

void calculateTriangleBySides(){
    int a, b, c;

    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a)
        printf("The triangle is valid\n");
    else
        printf("The triangle is not valid\n");
}

void calculateTriangleByAngles(){
    int a, b, c;

    printf("Enter three angles of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a + b + c == 180)
        printf("The triangle is valid\n");
    else
        printf("The triangle is not valid\n");
}

void printLinearPattern(){
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
/*
*
**
***
****
*****
*/
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}

void calculateEvenSum(){
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i % 2 == 0)
            sum += i; // sum = sum + i;
    }

    printf("The sum of even numbers from 1 to %d is %d\n", n, sum);
}

void calculateOddSum(){
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(i % 2 != 0)
            sum += i; // sum = sum + i;
    }

    printf("The sum of odd numbers from 1 to %d is %d\n", n, sum);
}

void calculateFactorial(){
    int n, i, factorial = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // 5! = 5 * 4 * 3 * 2 * 1
    // 5! = 1 * 2 * 3 * 4 * 5
    for(i = 1; i <= n; i++){
        factorial *= i; // factorial = factorial * i;
    }

    printf("The factorial of %d is %d\n", n, factorial);
}

// int choice;
int main(){
    int choice;

    do{
        printf("\n\n\t\tC Programming Revision Class\t\t\n");
        printf("1. Calculate a number is even or odd\n");
        printf("2. Calculate a number is positive or negative\n");
        printf("3. Calculate a number is prime or not\n");
        printf("4. Calculate a year is leap or not\n");
        printf("5. Show a multiplication Table by a given number\n");
        printf("6. Calculate your grade\n");
        printf("7. Calculator\n");
        printf("8. Calculate largest number between three numbers\n");
        printf("9. Calculate smallest number between three numbers\n");
        printf("10. Calculate a triangle is valid or not if the sides is given\n");
        printf("11. Calculate a triangle is valid or not if the angles is given\n");
        printf("12. Print a linear pattern of stars\n");
        printf("13. Calculate the even sum from 1 to n\n");
        printf("14. Calculate the odd sum from 1 to n\n");
        printf("15. Calculate the factorial of a given number\n");
        printf("16. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Calculate a number is even or odd\n");
                calculateEvenOdd();
                break;
            case 2:
                printf("Calculate a number is positive or negative\n");
                calculatePositiveNegative();
                break;
            case 3:
                printf("Calculate a number is prime or not\n");
                calculatePrime();
                break;
            case 4:
                printf("Calculate a year is leap or not\n");
                calculateLeapYear();
                break;
            case 5:
                printf("Show a multiplication Table by a given number\n");
                printMultiplicationTable();
                break;
            case 6:
                printf("Calculate your grade\n");
                calculateGrade();
                break;
            case 7:
                printf("Calculator\n");
                calculator();
                break;
            case 8:
                printf("Calculate largest number between three numbers\n");
                calculateLargestNumber();
                break;
            case 9:
                printf("Calculate smallest number between three numbers\n");
                calculateSmallestNumber();
                break;
            case 10:
                printf("Calculate a triangle is valid or not if the sides is given\n");
                calculateTriangleBySides();
                break;
            case 11:
                printf("Calculate a triangle is valid or not if the angles is given\n");
                calculateTriangleByAngles();
                break;
            case 12:
                printf("Print a linear pattern of stars\n");
                printLinearPattern();
                break;
            case 13:
                printf("Calculate the even sum from 1 to n\n");
                calculateEvenSum();
                break;
            case 14:
                printf("Calculate the odd sum from 1 to n\n");
                calculateOddSum();
                break;
            case 15:
                printf("Calculate the factorial of a given number\n");
                calculateFactorial();
                break;
            case 16:
                printf("Exit\n");
                exit(0);
                break;
        }
    }while(choice != 16);
    return 0;
}