#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 0;
	int b = 0;
	int val = 0;
	scanf("%d %d", &a, &b);

	if ((b%a) == 0) {
		val = a + b;
	} else {
		val = b -a;
	}
	printf("%d",val);
	return 0;
}
