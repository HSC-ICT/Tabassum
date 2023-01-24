// 1/1! + 2/2! + 3/3! + 4/4! + ... N/N! = 

#include <stdio.h>

int main() {
    int n;
    double sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        int fact = 1;
        for(int j = 1; j <= i; j++){
            fact = fact * j;
        }
        sum += i / (double) fact;
        printf("%d/%d!", i, i);
        if(i < n) printf(" + ");
    }

    printf(" = %.2lf\n", sum);

return 0;
}