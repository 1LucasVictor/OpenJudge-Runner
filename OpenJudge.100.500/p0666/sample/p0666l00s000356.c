#include<stdio.h>
int main()
{
	int x,a,b,c;
	scanf("%d %d %d",&x,&a,&b);
  	c=0;
	c=b-x;
	if(c<=0) printf("delicious\n");
	else if(x+1>c) printf("safe\n");
	else printf("dangerous\n");
	return 0;
}
