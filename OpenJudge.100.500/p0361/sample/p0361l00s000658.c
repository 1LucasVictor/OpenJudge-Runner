#include<stdio.h>
int main(void)
{
	int h,m,s,x;
	scanf("%d",&x);
	h=x/3600;
	x=x%3600;
	m=x/60;
	s=x%60;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}