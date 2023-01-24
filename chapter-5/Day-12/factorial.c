// 5! = 5 * 4 * 3 * 2 * 1 = 120
// 5! = 1 * 2 * 3 * 4 * 5 = 120

#include <stdio.h>

int main() {
    int n, fact = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    printf("%d! = %d\n", n, fact);

return 0;
}

/*
fact = fact * i
fact = 1 * 1
fact = 1

fact = fact * i
fact = 1 * 2
fact = 2

fact = 2 * 3
fact = 6

fact = 6 * 4
fact = 24

fact = 24 * 5
fact = 120
*/