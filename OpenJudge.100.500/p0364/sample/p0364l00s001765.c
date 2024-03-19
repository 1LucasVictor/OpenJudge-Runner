#include<stdio.h>

int main(void)
{
	int W, H, x, y, r, i;

	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

	i = 0;
	if (x + r>W)i = 1;
	if (y + r>H)i= 1;
	if (r>x)i = 1;
	if (r>y)i= 1;

	if (i == 0)printf("Yes\n");
	else printf("No\n");

	return 0;
}
