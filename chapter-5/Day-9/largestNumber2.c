#include <stdio.h>

int main(){
//    result = (condtion) ? statement : statement;
    int n1, n2;

    printf("Enter two integer number: ");
    scanf("%d%d", &n1, &n2);

    (n1 > n2) ? printf("%d\n", n1) : printf("%d\n", n2);

    return 0;
}