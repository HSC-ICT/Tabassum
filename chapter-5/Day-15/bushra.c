#include<stdio.h>

int CalcPosNeg(int num){
    return (num >= 0) ? 1 : 0;
}

int main () {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int ans = CalcPosNeg(num);
    (ans) ? printf("Positive\n") : printf("Negative\n");
    
    return 0;
}