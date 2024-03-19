#include <stdio.h>
int main(void){

	int a;
	int b;
	double c;

	scanf("%d", &a);
	scanf("%lf", &c);

	b = floor(a * c);
	printf("%d", b);
	
	return 0;
}