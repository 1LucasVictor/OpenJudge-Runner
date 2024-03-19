#include <stdio.h>
int main(void) {
	int ae[5];
	int k;
	int ans = 0;
	scanf("%d %d %d %d %d %d", &ae[0],&ae[1],&ae[2],&ae[3],&ae[4],&k);
	for (int i = 0; i < 5; ++i) {
		for (int j = i + 1; j < 5; ++j) {
			if (ae[j] - ae[i] > k) {
				++ans;
			}
		}
	}
	printf(ans == 0 ? "Yay!" : ":(");


	return 0;
}