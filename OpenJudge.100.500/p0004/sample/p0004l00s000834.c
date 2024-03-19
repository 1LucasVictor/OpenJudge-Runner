#include <stdio.h>

int gcd(int x,int y)
{
	return y>0?gcd(y,x%y):x;
}

int lcm(int x,int y)
{
	return x/gcd(x,y)*y;
}

int main(void)
{
	int x,y;

	while(scanf("%d %d",&x,&y)!=EOF) {
		printf("%d %d\n",gcd(x,y),lcm(x,y));
	}
	return 0;
}