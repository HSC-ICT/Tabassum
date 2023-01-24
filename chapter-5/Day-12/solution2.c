// 1^2 + 2^2 + 3^2 + ....... + n^2 = ?

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum = sum + (i * i);
        printf("%d^2", i);
        if(i < n) printf(" + ");
    }
    printf(" = %d\n", sum);
    sum = 0;

    for(int i = 1; i <= n; i++){
        sum = sum + (i * i);
        if(i == n) printf("%d^2", i);
        else printf("%d^2 + ", i);
    }
    printf(" = %d\n", sum);
return 0;
}