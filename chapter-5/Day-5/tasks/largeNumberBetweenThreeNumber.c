// large number between three number

// method 1
#include<stdio.h>
int main(){
    int a,b,c; // variable initialization

    printf("Enter three number: ");
    scanf("%d%d%d",&a, &b, &c); // taking input from user

    if(a > b && a > c) printf("%d is large number",a);
    else if(b > a && b > c) printf("%d is large number",b);
    else printf("%d is large number",c);

    return 0;
}

// method 2
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a, &b, &c);
    if(a > b){
        if(a > c) printf("%d is large number",a);
        else printf("%d is large number",c);
    }
    else{
        if(b > c) printf("%d is large number",b);
        else printf("%d is large number",c);
    }
    return 0;
}
