#include <stdio.h>

int main(){
/*
    n1 = 3, n2 = 5
    n1 = 5, n2 = 3
*/
    int n1, n2, temp; // variable initialization

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    temp = n1;
    n1 = n2;
    n2 = temp;

    printf("n1 = %d, n2 = %d\n", n1, n2);
}
/*
n1 = 5, n2 = 3

temp = n1
temp = 5

n1 = n2
n1 = 3

n2 = temp
n2 = 5

n1 = 3, n2 = 5
*/