#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	if((m*n)%2==1)
	printf("Odd");
	if((m*n)%2==0)
	printf("Even");
return 0;
}
