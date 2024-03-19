#include <stdio.h>

int main(void)
{
	int a ,b ,c ,ans ,x;
	scanf("%d %d %d",&a ,&b ,&c);
	
	x = a - b;
	ans = c - x;
	
	printf("%d",ans);
	
	return 0;
}