#include <stdio.h>

int main(int argc, char** argv)
{
	int i, j, k, h, l, cnt, n, x, result[1000];

	cnt = 0;
	
	memset(result, 0, sizeof(result));
	while (scanf("%d %d", &n, &x) != EOF) {
		int list_cnt = 0;
		int list[1500][3] = { { 0 } };
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= n; j++) {
				if (i == j) {
					continue;
				}

				int sum = i + j;
				if (sum > x) {
					break;
				}

				for (k = 1; k <= n; k++) {
					if (i == k || j == k) {
						continue;
					}

					int sum = i + j + k;
					if (sum > x) {
						break;
					}
					else if (sum == x) {
						int ins_f = 1;
						for (h = 0; h < list_cnt; h++) {
							int match_cnt = 0;
							for (l = 0; l < 3; l++) {
								if (list[h][l] == i || list[h][l] == j || list[h][l] == k) {
									match_cnt++;
								}
							}

							if (match_cnt == 3) {
								ins_f = 0;
								break;
							}
						}

						if (ins_f) {
							list[list_cnt][0] = i;
							list[list_cnt][1] = j;
							list[list_cnt][2] = k;
							list_cnt++;
						}
						break;
					}
				}
			}
		}

		result[cnt] = list_cnt;

		if (n == 0 && x == 0) {
			break;
		}
		cnt++;
	}

	for (i = 0; i < cnt; i++) {
		printf("%d\n", result[i]);
	}
	return 0;
}