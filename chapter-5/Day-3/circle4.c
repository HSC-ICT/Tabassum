// Write a problem to calculate the area of a circle

#include <stdio.h>
#define PI 3.1416 // global variable
// macros are used to define constants
// typeded is used to define new data types
// define is used to define constants

int main() {
    double r, area; // local variable

    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    area = PI * r * r;

    printf("The area of the circle is: %.3lf\n", area);
return 0;
}