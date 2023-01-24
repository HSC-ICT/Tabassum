#include <stdio.h>

int main(){
//    result = (condtion) ? statement : statement;
    int n;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("Even\n") : printf("Odd\n");

    return 0;
}