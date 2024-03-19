// Aizu Vol0 0007: Debt Hell
// 2017.7.28

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int a = 100000;

	scanf("%d", &n);
	while (n-- > 0) {
		a = a + (a * 5) / 100;
		a = ((a - 1) / 1000 + 1) * 1000;   // 1000?????????????????????
	}
	printf("%d\n", a);
	return 0;
}