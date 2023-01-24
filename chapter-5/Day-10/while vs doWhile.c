#include <stdio.h>

int main(){
    // while loop part
    int i = 11;
    while(i <= 10){
        printf("%d While Loop\n", i);
        // Statements
        i++;
    }
    printf("\n");

    // do while loop part
    int j = 11;
    do{
        printf("%d Do While Loop\n", j);
        // Statements
        j++;
        printf("%d Do While Loop\n", j);
    }while(j <= 10);
    printf("\n");

    return 0;
}