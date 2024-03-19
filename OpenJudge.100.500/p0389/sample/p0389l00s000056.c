#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[20001],*p;
	int h,i,j,k,s,c;
	while(1)
	{
	scanf("%s",a);
	if(strcmp(a,"-")==0)
	{
		break;
	}
	s=0;
	for(p=a;*p;p++)
	{
		s=s+1;
	}
	scanf("%d",&i);
	c=0;
	for(j=0;j<i;j++)
	{
		scanf("%d",&k);
		c=c+k;
	}
	for(j=0;j<c%s;j++)
	{
		a[s+j]=a[j];
	}
	for(j=c%s;j<s+c%s;j++)
	{
		a[j-c%s]=a[j];
	}
	for(j=0;j<s;j++)
	{
		printf("%c",a[j]);
	}
	printf("\n");
	}
	return 0;
}