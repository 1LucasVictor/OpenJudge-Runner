#include<stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int count1 = a*b;
	if(count1 < c)
		printf("%d",count1);
	else
		printf("%d",c);
	return 0;
}