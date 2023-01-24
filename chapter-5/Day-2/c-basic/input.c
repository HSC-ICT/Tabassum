#include<stdio.h>

int main(){
	int n1;
	scanf("%d", &n1); // input
	printf("%d\n", n1 + 100); // output
	
	float n2;
	scanf("%f", &n2); // input
	printf("%.2f\n", n2 + 50.9); // output
	
	double n3;
	scanf("%lf", &n3); // input
	printf("%.2lf\n", n3 + 173.38); // output

    return 0;
}
