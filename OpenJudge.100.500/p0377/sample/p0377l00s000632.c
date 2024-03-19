#include <stdio.h>

int main(void)
{
	int amount;
	scanf("%d", &amount);

	int trump[4][13] = {{}}; char pattern; int n;
	int sn = 0, hn = 0, cn = 0, dn = 0;
	for (int i = 0; i < 2 * amount; ++i) {
		scanf("%c %d", &pattern, &n);
		if (pattern == 'S') {
			trump[0][sn] = n;
			++sn;
		} else if (pattern == 'H') {
			trump[1][hn] = n;
			++hn;
		} else if (pattern == 'C') {
			trump[2][cn] = n;
			++cn;
		} else if (pattern == 'D') {
			trump[3][dn] = n;
			++dn;
		}
	}

	for (int i = 0; i < 4; ++i) {
		for (int j = 1; j <= 13; ++j) {
			for (int k = 0; k < 13; ++k) {
				if (trump[i][k] == j) break;
				if (k == 12) {
					if (i == 0) {
						printf("S %d\n", j);
					} else if (i == 1) {
						printf("H %d\n", j);
					} else if (i == 2) {
						printf("C %d\n", j);
					} else if (i == 3) {
						printf("D %d\n", j);
					}
				}
			}
		}
	}

	return 0;
}