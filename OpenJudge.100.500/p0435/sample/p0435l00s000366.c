#include <stdio.h>
#include <math.h>

void main() {
	int N, D;
	int count = 0;

	scanf("%d %d", &N, &D);

	int X, Y;

	for (int i = 0; i < N; i++) {
		scanf("%d %d", &X, &Y);

		if (sqrt(X*X+Y*Y) <= D) {
			count++;
		}
	}
	printf("%d", count);
}
