#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
	int a,b,k,i,flag=0;
	scanf("%d",&k);
	scanf("%d %d",&a,&b);
	if(a==b&&a%k==0)
	{
		printf("OK");
		return 0;
	}
	for(i=a;i<=b;i++)
	{
		if(i%k==0)
		flag++;
	}
	if(flag==0)
	printf("NG");
	else printf("OK");
	return 0;
} 