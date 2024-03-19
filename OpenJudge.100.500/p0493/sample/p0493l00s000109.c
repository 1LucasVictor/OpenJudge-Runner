#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<assert.h>

int main()
{
	int k = 0, u = 0;
	scanf("%d", &k);
	u = (k / 500) * 1000;
	k %= 500;
	u += (k / 5) * 5;

	printf("%d", u);

	return 0;
}