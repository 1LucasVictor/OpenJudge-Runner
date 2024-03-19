#include <stdio.h>

int main(void)
{
	int a, b, x;
	scanf("%d %d %d%*c", &a, &b, &x);

	if(x-a <= b)
		printf("YES");
	else
		printf("NO");
	
	return 0;
}
