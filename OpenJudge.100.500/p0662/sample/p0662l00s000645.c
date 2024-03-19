#include<stdio.h>
int main()
{
	int max,min,a,b,c,d,time;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)==4)
	{
		if(a<c) max=c;else max=a;
		if(b<d) min=b;else min=d;
		time=min-max;
		if(time<=0) time=0;
		printf("%d\n",time);
	}
} 