#include <stdio.h>
int main(void)
{
	int x;
	int h;
	int m;
	int s;
	scanf("%d",&x);
	h=x/3600;
	m=x%3600/60;
	s=x%3600%60;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}