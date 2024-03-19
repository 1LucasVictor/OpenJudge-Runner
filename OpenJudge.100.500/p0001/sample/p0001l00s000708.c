#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j, k, work[2][200], size;
	

	for (i = 0; i < 200; i++)
		if (scanf("%d %d", &work[0][i], &work[1][i]) == EOF)
			break;
	size = i;

	for (k = 0; k < size; k++) {
		for (j = 0; j < 2; j++) {
			for (i = 0; work[j][k] > 0;) {
				i += (work[j][k] % 10 ? 1 : 0);
				work[j][k] = work[j][k] / 10;
			}
			work[j][k] = i;
		}

		printf("%d\n", work[0][k] + work[1][k]);

	}

	return 0;
}