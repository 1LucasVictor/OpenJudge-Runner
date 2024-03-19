#include <stdio.h>
int main(void)
{
	int n, h, temp;
	scanf("%d %d", &h, &n);
	while (n--)
	{
		scanf("%d", &temp);
		h -= temp;
	}
	printf("%s", h > 0 ? "No" : "Yes");
}