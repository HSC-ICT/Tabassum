// Write a program 

#include <stdio.h>

int main() {
    long long ans = 0;

    printf("Enter a number: ");
    scanf("%lld", &ans);

    for(int i = 1; i <= 10; i++){
        printf("%lld * %d = %lld\n", ans, i, ans * i);
    }

return 0;
}

/*
Enter a number: 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
*/