// 1/1 + 1/2 + 1/3 + 1/4 + 1/5 + .. 1/N = ?

#include <stdio.h>

int main() {
    int n;
    double sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += 1 / (double) i;
        printf("%d/%d", 1, i);
        if(i < n) printf(" + ");
    }

    printf(" = %.2lf\n", sum);

return 0;
}