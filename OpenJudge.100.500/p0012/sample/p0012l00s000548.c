#include <stdio.h>
int main(void)
{
	int array[10];
	int n,l=0;
	while(scanf("%d",&n) != EOF)
	{
		if(n != 0)
		{
			array[l] = n;
			l++;
		}
		else
		{
			printf("%d\n",array[l-1]);
			l--;
		}
	}
	return 0;
}