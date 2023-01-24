// create a calculator using c language

#include<stdio.h>

int main(){
	// +, -, *, /
	float n1, n2; // variable initialization
	
	/*
	printf("Enter 1st number: ");
	scanf("%f", &n1);
	printf("Enter 2nd number: ");
	scanf("%f", &n2);
	*/
	printf("Enter two number: ");
	scanf("%f %f", &n1, &n2);
	
	float sum, sub, prod, div; // variable initialization
	
	sum = n1 + n2;
	sub = n1 - n2;
	prod = n1 * n2;
	div = n1 / n2;
	
	/*
	= --> assignment operator
	== --> comparison operator(without checking type)
	=== --> comparison operator(with checking type)
	*/
	
	printf("Summation = %.2f\n", sum);
	printf("Subtraction = %.2f\n", sub);
	printf("Multiplication = %.2f\n", prod);
	printf("Division = %.2f\n", div);
	
	return 0;
}
