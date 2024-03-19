#include <stdio.h>

void
to_card(int idx, char *suit, int *rank)
{
	switch (idx/13)
	{
	case 0: *suit = 'S'; break;
	case 1: *suit = 'H'; break;
	case 2: *suit = 'C'; break;
	case 3: *suit = 'D'; break;
	}
	*rank = idx%13 + 1;
}

void
to_idx(char suit, int rank, int *idx)
{
	switch (suit)
	{
	case 'S': *idx = 0*13 + (rank-1); break;
	case 'H': *idx = 1*13 + (rank-1); break;
	case 'C': *idx = 2*13 + (rank-1); break;
	case 'D': *idx = 3*13 + (rank-1); break;
	}
}

int
main()
{
	int n_exists;
	scanf("%d\n", &n_exists);

	int idx;
	int rank;
	char suit;
	int is_exists[4*13] = {0};

	int i;
	for (i = 0; i < n_exists; i++)
	{
		scanf("%c %d\n", &suit, &rank);
		to_idx(suit, rank, &idx);
		is_exists[idx] = 1;
	}
	for (idx = 0; idx < 4*13; idx++)
	{
		if (!is_exists[idx])
		{
			to_card(idx, &suit, &rank);
			printf("%c %d\n", suit, rank);
		}
	}

	return 0;
}