// # print a multiplication table using function where in the main function you have to take input from the user and pass the value to the function call.


#include <stdio.h>

void multiplicationTable(int n){
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    multiplicationTable(n);
}