#include<stdio.h>
int main(){
    int n1, n2;
    printf("Enter 2 integer number: ");
    scanf("%d%d", &n1, &n2);

    switch(n1 > n2){
        case 0:
            printf("%d is the largest number.\n", n2);
            break;
        case 1:
            printf("%d is the largest number.\n", n1);
            break;
    }
}