#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a<c)
	  a=c;
	if(b>d)
	  b=d;
	if(b-a<0)
	   b=a;
	printf("%d\n",b-a);
	return 0;
}