// create a calculator using if else statement

#include <stdio.h>

int main() {
    char operator;
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    float n1, n2;
    printf("Enter two numbers: ");
    scanf("%f %f", &n1, &n2);

    if(operator == '+') {
        printf("%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
    } else if(operator == '-') {
        printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
    } else if(operator == '*') {
        printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
    } else if(operator == '/') {
        printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
    } else if(operator == '%') {
        printf("%.2f %% %.2f = %d\n", n1, n2, (int) n1 % (int) n2);
    } else {
        printf("Error! operator is not correct");
    }

return 0;
}