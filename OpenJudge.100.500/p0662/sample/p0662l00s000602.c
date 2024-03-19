#include<stdio.h>
int main()
{ int a,b,c,i,t,j,d,e;
	while(scanf("%d%d%d%d",&a,&b,&c,&d)!=EOF)
	{
		if(b<=c||a>=d)
		{
			e=0;
		}
		else
		{
			i=a<c?a:c;
			j=a+c-i;
			t=d<b?d:b;
			e=t-j;
		}
		printf("%d\n",e);
	}
}