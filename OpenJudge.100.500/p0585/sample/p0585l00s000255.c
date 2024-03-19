#include <stdio.h>

int main() {
	int a, b, t, bis=0;

	scanf("%d %d %d", &a, &b, &t);

	t += 0.5;

	bis = b * (t / a);

	printf("%d\n", bis);

	return 0;
}