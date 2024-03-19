#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<10;i++)
	{
		if(n%i==0&&(n/i)<10)
		{
			printf("Yes\n");
			return 0;
		}
	}
	printf("No\n");
	return 0;
}
		