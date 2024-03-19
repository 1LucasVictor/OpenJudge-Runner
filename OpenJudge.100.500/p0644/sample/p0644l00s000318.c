#include<stdio.h>
int main(void)
{
	int x,a,b,c,ans;
	scanf("%d",&x);
	a=x%100;
	b=x%10;
	c=x%1;
	ans=a+b+c;
	printf("%d\n",ans);
	return 0;
}