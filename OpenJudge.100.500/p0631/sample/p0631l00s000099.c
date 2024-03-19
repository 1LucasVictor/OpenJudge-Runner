#include <stdio.h>
int main()
{
	int a, b, x;
	scanf("%d %d %d", &a, &b, &x);
	if (x > a && x < (a + b) && x != 0)
	{
		printf("YES\n");
	}
	else
		printf("NO\n");
	
return 0;
}