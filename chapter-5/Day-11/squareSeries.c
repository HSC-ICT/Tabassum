// 1^2 + 2^2 + 3^2 + ........ + n^2 = ?

#include <stdio.h>

int main() {
    long long sum = 0;
    
    long long n;
    printf("Enter n: ");
    scanf("%lld", &n);

    printf("Sum = %lld\n", (n * (n + 1) * (2 * n + 1) / 6));
return 0;
}