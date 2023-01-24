// Write a problem to calculate the area of a triangle

#include <stdio.h>

int main() {
    double base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%lf", &base);
    printf("Enter the height of the triangle: ");
    scanf("%lf", &height);

    // area = 0.5 * base * height;

    printf("The area of the triangle is: %.3lf\n", 0.5 * base * height);

return 0;
}