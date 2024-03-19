#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
 
	int a, b, c, sum;
	a = b = c = sum = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);


	int Swater = b + c;

	if (Swater <= a) {
		sum = 0;
	}else{
		sum = Swater - a;
	}

	printf("%d", sum);
 
	return EXIT_SUCCESS;
}