#include <stdio.h>          // printf(), scanf()
#include <stdbool.h>

#define N 8

const int nil = -1;
bool x[N][N];
int row[N];
bool col[N];
bool dpos[2 * N - 1], dneg[2 * N - 1];

void
print_board()
{
	int i, j;

	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < N; ++j)
		{
			if (x[i][j] && row[i] != j)
				return;
		}
	}

	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < N; ++j)
			printf("%c", (row[i] == j) ? 'Q' : '.');

		printf("\n");
	}
}

void
backtrack(int i)
{
	int j;

	if (i == N)
	{
		print_board();
		return;
	}

	for (j = 0; j < N; ++j)
	{
		if (!col[j] && !dpos[i + j] && !dneg[i - j + N - 1])
		{
			row[i] = j;
			col[j] = dpos[i + j] = dneg[i - j + N - 1] = true;

			backtrack(i + 1);
			row[i] = nil;
			col[j] = dpos[i + j] = dneg[i - j + N - 1] = false;
		}
	}
}

void
initialize()
{
	int i, j;

	for (i = 0; i < N; ++i)
	{
		row[i] = nil;
		col[i] = false;

		for (j = 0; j < N; ++j)
			x[i][j] = false;
	}

	for (i = 0; i < 2 * N - 1; ++i)
	{
		dpos[i] = false;
		dneg[i] = false;
	}
}

int
main(int argc, char** argv)
{
	int r, c;
	int k;
	int i;

	initialize();

	scanf("%d", &k);
	for (i = 0; i < k; ++i)
	{
		scanf("%d %d", &r, &c);
		x[r][c] = true;
	}

	backtrack(0);
	return 0;
}