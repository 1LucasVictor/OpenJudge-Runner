#include<stdio.h>
int main()
{
	int a, b, c, div = 0;
	scanf("%d %d %d", &a,&b,&c);
	for (int i = a ; i <= b; i++)
	{
		if(c % i == 0)
		{
			div++;
		}
	}
	printf("%d\n",div);
	return 0;
}
