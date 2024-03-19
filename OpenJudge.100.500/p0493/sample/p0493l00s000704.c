#include <stdio.h>

int main(void){
	int x = 0, h1 = 0, h2 = 0, h;
	scanf("%d", &x);
	
	h1 += x / 500;
	h1 *= 1000;
	//printf("%d\n", h1);
	h2 += (x - h1 / 2) / 5;
	h2 *= 5;
	//printf("%d\n", h2);
	h = h1 + h2;
	printf("%d", h);
	
	return 0;
}
