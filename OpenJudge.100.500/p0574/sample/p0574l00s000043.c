#include <stdio.h>
int main()
{
	int n,c=0,p=0,i=0;
	scanf("%d",&n);
	int a[1000000]={0};
	while(n>0)
	{
		a[i]=n%10;
		i++;
		n=n/10;
		c++;
	}
	for(int i=1;i<c;i++)
	{
		if(a[i]==a[i-1])
		{
			p=1;
			printf("Bad\n");
			break;
		}
	}
	if(p==0)
	{
		printf("Good\n");
	}
	return 0;
}