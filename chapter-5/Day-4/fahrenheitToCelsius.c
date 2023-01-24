// Write a program to convert temperature from Fahrenheit to Celsius

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = ((fahrenheit - 32) * 5) / 9;

    printf("The temperature in celsius is: %.2f\n", celsius);

return 0;
}