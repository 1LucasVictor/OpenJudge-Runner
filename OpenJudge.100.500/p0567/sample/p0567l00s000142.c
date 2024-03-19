#include<stdio.h>
int main()
{
	int a, b, c, sum;
	scanf("%d %d %d",&a, &b, &c);
	sum=c-(a-b);
	if(sum>0)
		printf("%d\n",sum);
	else
		printf("0\n");
	return 0;
}