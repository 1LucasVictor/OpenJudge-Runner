#include <stdio.h>

int main()
{
	int X, Y;
	scanf("%d %d", &X, &Y);
	if (Y >= X * 2 && Y <= X * 4 && Y % 2 == 0) printf("Yes\n");
	else printf("No\n");
	fflush(stdout);
	return 0;
}