#include <stdio.h>
int main(void)
{
	int a,b, sum,d;
	while(scanf("%d %d", &a, &b)!=EOF)
	{
		d=1;
		sum=a+b;
		while(sum >= 10)
		{
			sum /=10;
			d++;
		}
		printf("%d\n", d);
	}
	return 0;
}