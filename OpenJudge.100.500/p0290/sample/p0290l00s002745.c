#include<stdio.h>
#include<math.h>

int jugde(int x)
{
	int i;
	int limit=sqrt(x);
	
	if(x==2)return 1;
	if(x%2==0||x<2)return 0;
	
	else
	{
		for(i=3;i<limit;i+=2)
		{
			if(x%i==0)return 0;
		}
	}
	
	return 1;
}

int main()
{
	int n;
	int i;
	int count=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		if(jugde(a)==1)count++;
	}
	
	printf("%d\n",count);
       return 0;
	
}