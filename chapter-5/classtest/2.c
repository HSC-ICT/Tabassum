/*
do while loop
i = 0
i == 4? no
sum = 0 + 0 = 0
i = 0 + 1 = 1
i < 5? yes
i == 4? no
sum = 0 + 1 = 1
i = 1 + 1 = 2
i < 5? yes
i == 4? no
sum = 1 + 2 = 3
i = 2 + 1 = 3
i < 5? yes
i == 4? no
sum = 3 + 3 = 6
i = 3 + 1 = 4
i < 5? yes
i == 4? yes
break
sum = 6
*/


/*
while loop
j = 0
j < 5? yes
j == 2? no
sum = 0 + 0 = 0
j = 0 + 1 = 1
j < 5? yes
j == 2? no
sum = 0 + 1 = 1
j = 1 + 1 = 2
j < 5? yes
j == 2? yes
j = 2 + 1 = 3
continue
j < 5? yes
j == 2? no
sum = 1 + 3 = 4
j = 3 + 1 = 4
j < 5? yes
j == 2? no
sum = 4 + 4 = 8
j = 4 + 1 = 5
j < 5? no
sum = 8
*/


#include <stdio.h>
int main(){
    int i = 0, sum1 = 0, j = 0, sum2 = 0;
    do{
        if(i == 4) 
            break;
        sum1 += i; 
        i++;
    }while(i < 5);
    printf("Do while loop output: %d\n", sum1);
    
    while(j < 5){
        if(j == 2){
            j++;
            continue;
        }
        sum2 += j;
        j++;
    }
    printf("While loop output: %d\n", sum2);
    return 0;
}

// Do while loop output: 6
// While loop output: 8