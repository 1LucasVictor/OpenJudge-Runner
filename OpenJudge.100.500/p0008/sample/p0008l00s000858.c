//#include "stdafx.h"
#include <stdio.h>
#include <math.h>

int main()
{
    int n,i,p=0,j,judge=0,a[200000];
	while(scanf("%d",&n)!=EOF)
	{
		if (n==1)
			p=0;
		else{
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
			}
			if (judge==0){
				p++;
				a[p]=i;
			}
		}}
		printf("%d\n",p);
	}
	return 0;
}