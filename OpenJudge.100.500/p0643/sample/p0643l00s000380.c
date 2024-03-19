#include<stdio.h>
#include<stdlib.h>
 
int main(void) {
	int a, b;
 
	scanf("%d %d", &a, &b);
 
	switch ((a * b) % 2) {
	case 0:
		printf("Even\n");
		break;
	default:
		printf("Odd\n");
		break;
	}
 
	return EXIT_SUCCESS;
}