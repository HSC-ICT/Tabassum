// 2 + 4 + 6 + ... + n = ?

#include <stdio.h>

int main() {
    int sum = 0;
    printf("Even numbers from 1 to 100 are: ");
    for(int i = 1; i <= 99; i++){
        if(i % 2 == 0) sum += i;
    }
    printf("Sum = %d\n", sum);


    sum = 0;
    printf("Even numbers from 1 to 100 are: ");
    for(int i = 2; i <= 100; i += 2){
        sum += i;
    }
    printf("Sum = %d\n", sum);

return 0;
}


/*

sum = 0
i = 1
i <= 100 --> True
i % 2 == 0 --> False
1 % 2 == 0 --> False
sum = 0

sum = 0
i = 2
i <= 100 --> True
i % 2 == 0 --> True
2 % 2 == 0 --> True
sum += i
sum = sum + i
sum = 0 + 2
sum = 2

sum = 2
i = 3
i <= 100 --> True
i % 2 == 0 --> False
3 % 2 == 0 --> False
sum = 2

sum = 2
i = 4
i <= 100 --> True
i % 2 == 0 --> True
4 % 2 == 0 --> True
sum += i
sum = sum + i
sum = 2 + 4
sum = 6

sum = 6
i = 5
i <= 100 --> True
i % 2 == 0 --> False
5 % 2 == 0 --> False
sum = 6

sum = 6
i = 6
i <= 100 --> True
i % 2 == 0 --> True
6 % 2 == 0 --> True
sum += i
sum = sum + i
sum = 6 + 6
sum = 12


........
........

sum = 2450
i = 100
i <= 100 --> True
i % 2 == 0 --> True
100 % 2 == 0 --> True
sum += i
sum = sum + i
sum = 2450 + 100
sum = 2550

sum = 2550

*/