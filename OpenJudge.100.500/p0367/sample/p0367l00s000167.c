#include <stdio.h>

int main(void) {
	int a, b, c, i;
	scanf("%d %d %d", &a, &b, &c);
	i=0;
	while (a<=b)
	{
		if (c%a==0) {
			i++;
		}
		a++;
	}
	printf("%d\n", i);
	return 0;
}