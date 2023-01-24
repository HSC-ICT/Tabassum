#include <stdio.h>

int main(){
    int n1, n2; // variable initialization

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    if (n1 > n2){
        printf("%d - %d = %d\n", n1, n2, n1 - n2);
    } else {
        printf("%d - %d = %d\n", n2, n1, n2 - n1);
    }

    return 0;
}
/*
n1 = 4, n2 = 7

n1 > n2
4 > 7
false

n2 - n1
7 - 4 = 3

n1 = 7, n2 = 4
n1 > n2
7 > 4
true
n1 - n2
7 - 4 = 3
*/