#include <stdio.h>

int main(void)
{
	int x,y,z;
	int ans;

	scanf("%d %d %d", &x, &y, &z);
	ans = z / x;
	ans *= y;
	
	printf("%d", ans);
	return(0);
}
	