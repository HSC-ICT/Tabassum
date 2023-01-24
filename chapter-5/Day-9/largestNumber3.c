#include <stdio.h>

int main(){
    int n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    (n1 > n2 && n1 > n3) ? printf("%d is the largest number\n", n1) : (n2 > n3) ? printf("%d is the largest number\n", n2) : printf("%d is the largest number\n", n3);

    int result = (n1 > n2 && n1 > n3) ? n1 : (n2 > n3) ? n2 : n3;
    printf("%d is the largest number\n", result);

    return 0;
}