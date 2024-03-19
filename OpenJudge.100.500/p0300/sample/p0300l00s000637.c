#include <stdio.h>

#define MAX 10000

int S[MAX];
int T[MAX];
int Q[MAX];
int tail = 0;

int has_elem(int *Q, int v)
{
	int i;
	for (i = 0; i < tail; i++) {
		if (v == Q[i])
			return 1;
	}
	return 0;
}

int main(int argc, char *argv[])
{
	int n, q, i, j;
	int same = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &S[i]);
	scanf("%d", &q);
	for (i = 0; i < q; i++)
		scanf("%d", &T[i]);

	for (i = 0; i < n; i++) {
		for (j = 0; j < q; j++) {
			if (S[i] == T[j] && !has_elem(Q, T[j])) {
				same++;
				Q[tail++] = T[j];
			}
		}
	}
	
	printf("%d\n", same);

	return 0;
}
