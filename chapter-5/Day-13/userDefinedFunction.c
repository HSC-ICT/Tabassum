#include <stdio.h>
#include <math.h>

// user defined function
double calcDistance(double x1, double y1, double x2, double y2){ //parameter hisebe receive kora
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}

int main(){
    double x1, x2, y1, y2, distance;

    scanf("%lf%lf", &x1, &y1);
    scanf("%lf%lf", &x2, &y2);

    // user defined function
    distance = calcDistance(x1, y1, x2, y2); // argument pass kora

    printf("%.4lf\n", distance);

    return 0;
}


