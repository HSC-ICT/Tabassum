// small number between three number

// method 1
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a, &b, &c);
    if(a < b && a < c) printf("%d is small number",a);
    else if(b < a && b < c) printf("%d is small number",b);
    else printf("%d is small number",c);
    return 0;
}

// method 2
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a, &b, &c);
    if(a < b){
        if(a < c) printf("%d is small number",a);
        else printf("%d is small number",c);
    }
    else{
        if(b < c) printf("%d is small number",b);
        else printf("%d is small number",c);
    }
    return 0;
}
