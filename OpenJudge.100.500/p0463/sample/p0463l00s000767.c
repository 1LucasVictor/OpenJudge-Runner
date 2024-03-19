#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	int a, b, c;
	a = n / 100;
	b = (n-100*a)/10;
	c = n - 100*a - 10*b;
	if(c == 3){
		printf("bon\n");
	}
	else if(c == 0 || c == 1 || c == 6 || c == 8){
		printf("pon\n");
	}
	else{
		printf("hon\n");
	}
	return 0;
}
