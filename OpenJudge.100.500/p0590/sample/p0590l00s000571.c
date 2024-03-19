#include <stdio.h>

int main(void)
{
	int distance[5], k, i, j;
	for (i = 0; i < 5; i++) scanf ("%d", &distance[i]);
	scanf ("%d", &k);
	int frag = 0;

	for(i = 0; i < 5; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (distance[j] - distance[i] >= k) frag++;
		}
	}
	if (frag == 0)printf ("Yay!\n");
	else printf (":(\n");
	return (0);
}
