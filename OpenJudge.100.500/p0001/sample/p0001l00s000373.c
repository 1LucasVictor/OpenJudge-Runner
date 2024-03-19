#include <stdio.h>

int main()
{
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF) {
		int sum = a + b;
		int i;
		for (i = 0; sum > 0; i++)
			sum /=10;
		printf("%d\n", i);
	}
	return 0;
}