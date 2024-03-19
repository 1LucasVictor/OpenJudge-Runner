
#include<stdio.h>
#include<string.h>

int main(void)
{
	int  i;
	int  len;
	char a[25];

	scanf("%s", a);

	len = strlen(a);

	for (i = len-1; i >= 0; i--)
		putchar(a[i]);

	putchar('\n');

	return 0;
}