// Write a problem to calculate the area of triangle

#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // area = sqrt(s(s-a)(s-b)(s-c))

    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("The area of the triangle is: %.3lf\n", area);

return 0;
}