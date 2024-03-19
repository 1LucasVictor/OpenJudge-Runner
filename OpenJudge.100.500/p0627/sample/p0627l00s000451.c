#include <stdio.h>

int main(){
	int a, b, max = 0;

	scanf("%d %d", &a, &b);

	if (a + b >= max) max = a + b;
	if (a - b >= max) max = a - b;
	if (a * b >= max) max = a * b;

	printf("%d\n", max);

	return 0;
}