#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter 3 angles of the triangle: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a + b + c == 180 && a != 0 && b != 0 && c != 0) printf("Valid\n");
    else printf("Invalid\n");

    return 0;
}