#include<stdio.h>
int main()
{ int a,b,c,d,e;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
	if(b<=c||a>=d)
	{
		e=0;
	}
	if(a<c&&c<d&&d<b)
	{
		e=d-c;
	}
	if(c<a&&a<b&&b<d)
	{
		e=b-a;
	}
	if(a<c&&c<b&&b<d)
	{
		e=b-c;
	}
	if(c<a&&a<d&&d<b)
	{
		e=d-a;
	}
	printf("%d\n",e);
}
}