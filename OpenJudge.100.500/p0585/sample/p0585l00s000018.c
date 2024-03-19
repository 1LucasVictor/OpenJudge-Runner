#include<stdio.h>
int main(void)
{
	int a,b,c;
	int sum=0;
	scanf("%d%d%d",&a,&b,&c);
	
	c=c/a;
	sum=b*c;
	
	printf("%d",sum);
	
	return 0;
}