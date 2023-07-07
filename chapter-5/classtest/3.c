#include <stdio.h>
int main(){
    int i = 0, sum = 0;
    for(i = 0; i < 5; i++)
        sum += i;
    printf("For loop output: %d\n", sum);
}