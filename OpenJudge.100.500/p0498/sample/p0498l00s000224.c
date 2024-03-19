#include <stdio.h>
#include <string.h>

int main(void)
{
	int n;
	int p;

	p = 0;
	scanf("%d", &n);
	p = n / 2;
	p = n % 2 == 0 ? p : (p + 1);
	printf("%d", p);
	return 0;
}
