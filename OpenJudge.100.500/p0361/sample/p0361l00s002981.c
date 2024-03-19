#include <stdio.h>

int main(void)
{
	int h,m,s,w;
	
	scanf("%d",&w);
		
	h=w/3600;
	m=(w%3600)/60;
	s=w%60;
	
	printf("%d:%d:%d\n",h,m,s);
		
	return 0;
}
