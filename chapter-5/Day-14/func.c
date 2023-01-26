// Write a program 

#include <stdio.h>

int calcSum(int num1, int num2) { 
    // pass kora argument gulo parameter hisebe receive kora hocche
    return num1 + num2;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int sum = calcSum(num1, num2); // argument pass kora
    printf("Sum is: %d\n", sum);

    return 0;
}