#include <stdio.h>

int main()
{
	int i, n, debt=100000;
	float rate=1.05;

	scanf("%d", &n);

	for (i=1; i<=n; i++) {
		debt = debt * rate;
		if (debt % 1000 != 0) debt = debt - debt % 1000 + 1000;
	}

	printf("%d\n", debt);

	return 0;
}