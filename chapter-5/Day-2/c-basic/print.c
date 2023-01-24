#include<stdio.h>

int main(){
    printf("Hello World\n"); // print something in the terminal
    
    printf("%i %i\n", 5, 7);
    
    int m; // variable initialization
    m = 10; // variable declaration
    printf("%d\n", m);
    
    int n = 3; // initialization + declation
    printf("%d\n", n);
    
    float myFloatNumber = 4.57390;
    printf("%f\n", myFloatNumber);
    printf("%.1f\n", myFloatNumber);
    printf("%.2f\n", myFloatNumber);
    
    double myDoubleNumber = 320945739.9382459832;
    printf("%lf\n", myDoubleNumber);
    printf("%.3lf\n", myDoubleNumber);
    printf("%.8lf\n", myDoubleNumber);
    
    char ch = 'T';
    printf("%c\n", ch);
    // string = ""
    // character = ''
    
    // string str = "Tabassum";

    return 0;
}
