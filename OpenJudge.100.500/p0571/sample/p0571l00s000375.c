#include <stdio.h>
int main (void)
{
	int a, b, n, c;
	
	scanf("%d %d %d", &n, &a, &b);
	
	c = a * n;
	
	if(c >= b){
		c = b;
	}
	
	printf("%d",c);
	
	return 0;
}