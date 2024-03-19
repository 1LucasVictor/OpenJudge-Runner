#include <stdio.h>

int main(void)
{
	int length[5], k, i;
	for(i = 0; i < 5; i++) scanf ("%d", &length[i]);
	scanf ("%d", &k);
	if (length[4] - length[0] <= k) printf ("Yay!\n");
	else printf (":(\n");
	return (0);
}