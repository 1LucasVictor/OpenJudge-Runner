#include<stdio.h>
int main()
{
	int k,a,b;

	scanf("%d%d%d",&k,&a,&b);

	if(a==b&&a%k==0)
		puts("OK");
	else if(a==b&&a%k!=0)
		puts("NG");
	else if(a/k<b/k)
		puts("OK");
	else
		puts("NG");
	return 0;
}