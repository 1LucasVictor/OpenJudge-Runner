#include <stdio.h>
#include <string.h>

int
main()
{
	char cards[200];
	char temp_cards[200];
	int n_shuffles;
	int n_cards;
	int h;
	int ni, hi, ci;
	for (;;)
	{
		scanf("%s", cards);
		n_cards = strlen(cards);

		if (strcmp(cards, "-") == 0)
			break;

		scanf("%d", &n_shuffles);
		for (ni = 0; ni < n_shuffles; ni++)
		{
			ci = 0;
			scanf("%d", &h);
			for (hi = h; hi < n_cards; hi++)
			{
				temp_cards[ci] = cards[hi];
				ci++;
			}
			for (hi = 0; hi < h; hi++)
			{
				temp_cards[ci] = cards[hi];
				ci++;
			}
			for (ci = 0; ci < n_cards; ci++)
			{
				cards[ci] = temp_cards[ci];
			}
		}
		puts(cards);
	}
}