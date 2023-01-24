#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter 3 sides of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a + b > c && b + c > a && c + a > b){
        printf("Triangle is valid");
    }else{
        printf("Triangle is not valid");
    }

    return 0;
}