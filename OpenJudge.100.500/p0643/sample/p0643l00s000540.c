#include<stdio.h>
int main()
{
	int i,k,n,m,a,b;
	scanf("%d%d",&a,&b); 
	if((a*b)%2==0)
	{
		printf("Even");
	}
	else if((a*b)%2!=0)
	{
		printf("Odd");
	}
	return 0;
 }