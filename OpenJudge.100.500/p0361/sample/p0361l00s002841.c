#include<stdio.h>
int main(void)
{
	int S;
	int h,m,s;
	
	scanf("%d",&S);
	h=S/3600;
	m=S%3600/60;
	s=S-3600*h-m*60;
	printf("%d:%d:%d\n",h,m,s);
	
	return 0;
}