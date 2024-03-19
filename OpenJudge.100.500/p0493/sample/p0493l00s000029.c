#include <stdio.h>

int main(void) {
	unsigned int X;
	int fhun, five;
	scanf("%u", &X);
	
	fhun = X/500;
	five = (X%500)/5;
	printf("%d", 5*five+1000*fhun);
	
	return 0;
}

