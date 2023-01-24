// 2 + 5 + 8 + ... + n = 145
// 2 + 5 + 8 + 11 + 14 + 17 + 20 + 23 + 26 + 29 = 155

#include <stdio.h>

int main() {
    int i = 2, sum = 0, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i; i <= n; i += 3){
        sum += i; // sum = sum + i;
    }

    printf("2 + 5 + 8 + ... + n = %d\n", sum);

return 0;
}