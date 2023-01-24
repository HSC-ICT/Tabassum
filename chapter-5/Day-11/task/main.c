// 1^2 + 2^2 + 3^2 + ... + n^2 = ?

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if(i == n) {
            printf("%d^2", i);
        } else {
            printf("%d^2 + ", i);
        }
        sum += i * i;
    }
    printf(" = %d\n", sum);

return 0;
}

/*

maruf@mms:~/Documents/projects/nextjs/crew-labs$ run
Enter n: 10
1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 6^2 + 7^2 + 8^2 + 9^2 + 10^2 = 385
maruf@mms:~/Documents/projects/nextjs/crew-labs$ run
Enter n: 5
1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
maruf@mms:~/Documents/projects/nextjs/crew-labs$ 

*/
