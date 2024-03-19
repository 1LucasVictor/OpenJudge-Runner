#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,a,b,x,y;
	scanf("%d %d %d",&n,&a,&b);
	x=n*a;
	y=b;
	if(x>=y)printf("%d",y);
	else printf("%d",x);	
	return 0;
}