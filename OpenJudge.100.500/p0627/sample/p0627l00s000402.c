#include<stdio.h>
int main()
{
	int a,b,total;
	scanf("%d %d",&a,&b);
//	if(a+b>=total) 
//	{
//		total = a+b;
//	}
	total = a+b;
	if(a-b>=total)
	{
		total = a-b;
	}
	if(a*b>=total)
	{
		total = a*b;
	}
	printf("%d\n",total);
	return 0;
}