#include <stdio.h>

int findLargestNumber(int x, int y, int z) {
    if(x >= y && x >= z) return x;
    else if(y >= x && y >= z) return y;
    else return z;
    // return (x >= y && x >= z) ? x : (y >= x && y >= z) ? y : z;
}
int findSmallestNumber(int num1, int num2, int num3) {
    if(num1 <= num2 && num1 <= num3) return num1;
    else if(num2 <= num1 && num2 <= num3) return num2;
    else return num3;
    // return (num1 <= num2 && num1 <= num3) ? num1 : (num2 <= num1 && num2 <= num3) ? num2 : num3;
}
int main(){
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = findLargestNumber(num1, num2, num3);
    int min = findSmallestNumber(num1, num2, num3);

    int num4, num5, num6;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num4, &num5, &num6);

    int max2 = findLargestNumber(num4, num5, num6);
    int min2 = findSmallestNumber(num4, num5, num6);

    printf("Largest number is: %d\n", max);
    printf("Smallest number is: %d\n", min);
}