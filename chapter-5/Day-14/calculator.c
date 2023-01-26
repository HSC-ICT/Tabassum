#include <stdio.h>

void calcSum(double num1, double num2) {
    printf("Summation is: %.2lf\n", num1 + num2);
}
double calcSub(double num1, double num2) {
    return num1 - num2;
}
double calcProd(double num1, double num2) {
    double product = num1 * num2;
    return product;
}
void calcDiv(double num1, double num2) {
    double division = num1 / num2;
    printf("Division is: %.2lf\n", division);
}

int main(){
    double num1, num2;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    calcSum(num1, num2);

    double sub = calcSub(num1, num2);
    printf("Subtraction is: %.2lf\n", sub);

    double prod = calcProd(num1, num2);
    printf("Product is: %.2lf\n", prod);

    calcDiv(num1, num2);
}