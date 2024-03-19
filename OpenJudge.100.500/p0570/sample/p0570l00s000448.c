// AtCoder ABC135: A - Harmony
// 2019.8.26 bal4u

#include <stdio.h>
 
int main()
{
	int a, b;
	
	scanf("%d%d", &a, &b);
	if ((a+b) & 1) puts("IMPOSSIBLE");
	else printf("%d\n", (a+b)>>1);
	return 0;
}