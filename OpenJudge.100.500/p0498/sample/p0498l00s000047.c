#include <stdio.h>

int main()
{
	int N = 0;
	int a = 0;

	scanf("%d", &N);

	if (N % 2 == 0) {
		a = N / 2;
		printf("%d", a);
	}
	else {
		a = (N + 1) / 2;
		printf("%d", a);
	}


	return 0;
}
