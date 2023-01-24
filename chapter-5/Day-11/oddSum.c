// 1 + 2 + 5 + ... + n = ?

#include <stdio.h>

int main() {
    int sum = 0;
    printf("Odd numbers from 1 to 100 are: ");
    for(int i = 1; i <= 100; i++){
        if(i % 2 != 0) sum += i;
    }
    printf("Sum = %d\n", sum);

    sum = 0;
    printf("Odd numbers from 1 to 100 are: ");
    for(int i = 1; i <= 100; i += 2){
        sum += i;
    }
    printf("Sum = %d\n", sum);

return 0;
}
