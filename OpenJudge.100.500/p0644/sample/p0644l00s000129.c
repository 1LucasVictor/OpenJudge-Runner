#include<stdio.h>
int main(void)
{
	int i, count=0;
	char s[9];
	scanf("%s", s);
	for (i = 0; i < 3; i++)
		count += s[i] == '1';
	printf("%d", count);
	return 0;
}