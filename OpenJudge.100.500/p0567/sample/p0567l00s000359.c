// AtCoder ABC136: A - Transfer
// 2019.8.26 bal4u

#include <stdio.h>
 
int main()
{
	int a, b, c;
	
	scanf("%d%d%d", &a, &b, &c);
	a -= b;
	if (a < c) c -= a;
	else c = 0;
	printf("%d\n", c);
	return 0;
}