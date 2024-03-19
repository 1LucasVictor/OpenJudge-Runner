#include <stdio.h>
#include <math.h>

int main()
{
	int stack[10];
	int stacknum = -1;
	int n;	
	while(scanf("%d",&n) != EOF)
	{
		if(n == 0)
		{
			printf("%d\n",stack[stacknum]);
			stacknum--;
		}
		else
		{
			stacknum++;
			stack[stacknum] = n;
		}
	}
	return 0;
}