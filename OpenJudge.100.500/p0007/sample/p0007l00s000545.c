#include<stdio.h>
#define ZERO 0
#define MIN 9
int main(void)
{
	int n,count,i,j,k,l;
	while(scanf("%d",&n)!=EOF)
	{
		count=0;
		for(i=ZERO;i<=MIN;i++)
		   for(j=ZERO;j<=MIN;j++)
		      for(k=ZERO;k<=MIN;k++)
		         for(l=ZERO;l<=MIN;l++)
		            if(i+j+k+l==n)
		               count++;
		printf("%d\n",count);
	}
	return 0;
}
