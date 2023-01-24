// create a calculator using c language

#include<stdio.h>

int main(){
	float n1, n2;

	printf("Enter two number: ");
	scanf("%f %f", &n1, &n2);

	printf("%.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
	printf("%.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
	printf("%.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
	printf("%.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
	printf("%.2f %% %.2f = %d\n", n1, n2, (int) n1 % (int) n2);

/*
Enter two number: 3 2
3.00 + 2.00 = 5.00
3.00 - 2.00 = 1.00
3.00 * 2.00 = 6.00
3.00 / 2.00 = 1.50
3.00 % 2.00 = 1
*/
	
	return 0;
}
