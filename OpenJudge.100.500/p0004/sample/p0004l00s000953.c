#include <stdio.h>
int main() {
	int large, small, i, gcd, lcm;
	while (scanf(" %d %d", &large, &small) != EOF) {
		if (large < small) {
			large ^= small;
			small ^= large;
			large ^= small;
		}
		for (i = small; i > 0; i--) {
			if (small % i == 0 && large % i == 0) {
				gcd = i;
				break;
			}
		}
		for (i = large;; i += large) {
			if (i % small == 0) {
				lcm = i;
				break;
			}
		}
		printf("%d %d\n", gcd, lcm);
	}
	return 0;
}