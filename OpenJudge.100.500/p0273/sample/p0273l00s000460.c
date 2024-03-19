#include <stdio.h>
int fibonatchi(int a,int b,int m){
	int c,l;
	c=a+b;
	l=m-1;
	if(l!=0)
		return (fibonatchi(c,a,l));
	else
		return a;
}
int main(void)
{
	int n,x,y;
	scanf("%d",&n);
	x=1;
	y=1;
	printf("%d",fibonatchi(x,y,n));
	return 0;
}
