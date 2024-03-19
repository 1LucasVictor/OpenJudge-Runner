#include<stdio.h>

int main()
{
	int a,b,c,x,y,z,o,p;
	scanf("%d %d %d\n",&a,&b,&c);
	
	x=a;y=b;z=c;
	
	if(x>y)
	{x=b;y=a;}
	if(y>z)
	{o=y;y=c;z=o;}
	if(x>y)
	{p=x;x=y;y=p;}
	
	printf("%d %d %d\n",x,y,z);
	
	return 0;
	
	
}