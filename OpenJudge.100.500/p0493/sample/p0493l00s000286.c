#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
	int X, h, r = 0, g = 0;
	scanf("%d", &X);
	while (X > 499){
		r++;
		X -= 500;
	}
	while (X > 4){
		g++;
		X -= 5;
	}
	h = r*1000 + g*5;

	printf("%d", h);

	return 0;
}