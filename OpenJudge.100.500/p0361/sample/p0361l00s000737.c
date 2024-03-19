#include <stdio.h>
int main()
{
	int S,h,m,s;
	scanf("%d",&S);
	s=S%60;
	m=S%3600/60;
	h=S/3600;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}