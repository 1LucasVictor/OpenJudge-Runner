#include<stdio.h>


int main()
{
	int m, n;
	while (scanf("%d %d",&m,&n)!= EOF)
	{
		int a = m, b = n;
		while (m%n != 0)
		{
			int temp = m%n;
			m = n;
			n = temp;
		}
		printf("%d %d\n",n,(a/n)*b);
	}
	return 0;
}