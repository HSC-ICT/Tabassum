// Write a problem to calculate the area of a circle

#include <stdio.h>

int main() {
    const double PI = 3.1416;
    double r, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    area = PI * r * r;

    printf("The area of the circle is: %.3lf\n", area);
return 0;
}