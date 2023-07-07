// write a c program sum of a series

#include <stdio.h>

int main() {
    int sum1 = 0, sum2 = 0;

    for(int i = -50; i <= 50; i += 2){ // i = i + 2
        sum1 += i; // sum = sum + i;
    }
    printf("Sum of even numbers between -50 to +50 = %d\n", sum1);
    for(int i = -50; i <= 50; i++){ // i = i + 1
        if(i % 2 == 0) sum2 += i; // sum = sum + i;
    }
    printf("Sum of even numbers between -50 to +50 = %d\n", sum2);
    return 0;
}