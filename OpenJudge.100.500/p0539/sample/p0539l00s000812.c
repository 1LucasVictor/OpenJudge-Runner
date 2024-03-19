#include<stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	for(i=1;i<=9;i++)
	{
		if(n%i==0 && (n/i<=9 && n/i>=1))
		{
		printf("Yes");
			count=1;
		break;
		}
	}
	if(count==0)
	printf("No");
return 0;
}