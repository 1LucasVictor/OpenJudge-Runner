#include<stdio.h>
int main()
{
	int second;
	scanf("%d",&second);
	int h=second/3600;
	int m=(second-(3600*h))/60;
	int s=(second-(3600*h)-(m*60));
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}
