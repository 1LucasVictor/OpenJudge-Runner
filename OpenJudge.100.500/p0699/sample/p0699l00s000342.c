#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=1 && b>=1 && c>=1 && a<=10 && b<=10 && c<=10)
	{
		if(a+b+c==17 && a*b*c==175)
		{
			printf("YES");
		}
		else
		{
			printf("NO");	
		}
	}
	else
	{
		printf("input error");
	}
	return 0;
} 