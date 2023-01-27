// # find a number is even or odd using function

#include <stdio.h>

void calcEvenOdd(int n){
    if(n % 2 == 0){
        printf("Even");
    }else{
        printf("Odd");
    }
}
int calcEvenOdd(int n){
    if(n % 2 == 0) return 1;
}

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int ans = calcEvenOdd(n);

    if(ans == 1){
        printf("Even");
    }else{
        printf("Odd");
    }
}