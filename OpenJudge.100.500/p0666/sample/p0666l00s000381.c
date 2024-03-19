#include<stdio.h>
int main()
{
	int x,a,b,c;
	scanf("%d %d %d",&x,&a,&b);
	c=0;
	c=b-x;
	if(c<=0) printf("delicious\n");
	else if(x+1<=c) printf("dangerous\n");
	else printf("safe\n");
	return 0;
}
