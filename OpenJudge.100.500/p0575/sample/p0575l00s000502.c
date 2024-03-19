#include <stdio.h>
int main(void) {
	int x, a;
	scanf("%d", &x);
	scanf("%d", &a);
	if (x < a) {
		printf("0");
	}
	else if(x >= a) {
		printf("10");
	}

	return 0;
}