//#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main()
{
    int num,n=1000000,i,p,j,judge=0,a[200000];
		p=1;//i=2,p++
		a[1]=2;
		for (i=2;i<=n;i++)
		{
			judge=0;
			for (j=1;j<=p;j++)
			{
				if (i%a[j]==0){
					judge=1;
					break;}
				if (j>=12){
				if (37*a[j]>i)
					break;}
			}
			if (judge==0){
				p++;
				a[p]=i;
			}
		}
	while(scanf("%d",&num)!=EOF)
	{
		for (i=1;i<=p;i++)
		{
			judge=0;
			if (a[i]>num)
				{judge=1;
			break;}
		}
		if (judge==1)
			printf("%d\n",i-1);
		else
			printf("%d\n",p);
	}
	return 0;
}