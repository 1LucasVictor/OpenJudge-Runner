#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, ans;
	
	scanf("%d%d", &a, &b);
	
	if ((a < 10) && (b < 10))
		ans = a * b;
	else
		ans = -1;
	
	printf("%d\n", ans);

	return 0;
}
