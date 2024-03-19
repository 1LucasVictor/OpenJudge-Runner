#include<stdio.h>
#define swap(x, y) {int z; z=y; y=x; x=z;}
int main()
{
	int a, b, c, i, div=0;
	scanf("%d %d %d", &a, &b, &c);
	for(i=a;i<=b;i++)
	{
		if(c%i == 0)
		{
			div++;
		}
	}
	printf("%d\n", div);
	return 0;
}
