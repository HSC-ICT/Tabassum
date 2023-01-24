// Write a program 

#include <stdio.h>

int main() {
    printf("Odd numbers from 1 to 100 are: ");
    for(int i = 1; i <= 100; i++){
        if(i % 2 != 0) printf("%d\t", i);
    }
    printf("\n");

return 0;
}