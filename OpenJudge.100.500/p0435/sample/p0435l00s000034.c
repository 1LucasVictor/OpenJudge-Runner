#include<stdio.h>
#include<math.h>
#include <limits.h>
#include<stdlib.h>
#include<string.h>


int main() {
	int n, d;
	int count = 0;
	long long int a,b;
	scanf("%d %d", &n, &d);

	int* x = (int*)malloc(sizeof(int) * n);
	int* y = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", x + i, y + i);
	}

	for (int i = 0; i < n; i++) {
		a = pow(*(x + i), 2);
		b = pow(*(y + i), 2);
		if (sqrt(a+b) <= d) {
			count++;
		}
	}

	printf("%d\n", count);
	return 0;
}