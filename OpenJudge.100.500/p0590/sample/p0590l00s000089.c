#include <stdio.h>

int main()
{
	int i, a[6];
	for (i = 0; i <= 5; i++) scanf("%d", &(a[i]));
	if (a[4] - a[0] <= a[5]) printf("Yay!\n");
	else printf(":(\n");
	fflush(stdout);
	return 0;
}