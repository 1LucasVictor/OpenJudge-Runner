#include<stdio.h>
#include<math.h>

int main(void) {
	int a = 0, n;
	scanf("%d", &a);
	n = a + pow(a, 2) + pow(a, 3);
	printf("%d", n);
	return 0;
}