#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void)
{
	int a[101],i;
	for(i=0;i<=100;i++)
	a[i]=1;
	int sum=0;
	int k=2;
	while(k--)
	{
		int m,n;
		scanf("%d %d",&m,&n);
		for(i=m;i<=n;i++)
		a[i]-=1;
	 } 
	 for(i=0;i<=100;i++)
	 {
	 	if(a[i]<0)
	 	sum++;
	 }
	 if(sum>0)
	 sum-=1;
	 printf("%d\n",sum);
 } 