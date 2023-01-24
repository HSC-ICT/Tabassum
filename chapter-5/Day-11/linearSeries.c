// 1 + 2 + 3 + .... + n = ?

#include <stdio.h>

int main() {
    long long sum = 0;
    
    long long n;
    printf("Enter n: ");
    scanf("%lld", &n);

    // for(int i = 1; i <= n; i++){
    //     sum += i;
    // }
    // printf("Sum = %lld\n", sum);

    sum = 0;
    printf("Sum = %lld\n", (n * (n + 1) / 2));

return 0;
}