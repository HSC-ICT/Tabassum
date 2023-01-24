// 1^2 + 2^2 + 3^2 + ....... + n^2 = ?
/*
1^2 = 1 * 1 = 1
2^2 = 2 * 2 = 4
3^2 = 3 * 3 = 9
*/

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum = sum + (i * i);
    }

    printf("The sum of the series is: %d\n", sum);

return 0;
}