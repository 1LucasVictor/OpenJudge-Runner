#include <stdio.h>
#include <math.h>

int main(void) {
	int d, n;
	
	scanf("%d %d", &d, &n);
	
	if (d != 0 || n != 100)
		printf("%d\n", (int)pow(100, d) * n);
	else
		printf("%d\n", 101);
	
	return 0;
}