#include<stdio.h>
#define N 20
int main()
{
	char a[N];
	fgets(a,N,stdin);
	int i = 0;
	while (a[i++] != '\0')
	{
		continue;
	}
	for (i = i - 3; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
	printf("\n");
	return 0;
}