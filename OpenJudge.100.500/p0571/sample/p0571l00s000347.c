#include<stdio.h>
int main()
{
	int n,a,b;

	scanf("%d%d%d",&n,&a,&b);

	printf("%d",a*n>b?b:a*n);
	return 0;
}