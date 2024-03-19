#include <stdio.h>
int solve(int answer) {
	int a, ab, abc, abcd;
	int cnt = 0;
	for (a = 0; a < 10; a++) {
		if (answer < a)
			break;
		for (ab = a; ab < a + 10; ab++) {
			if (answer < ab)
				break;
			for (abc = ab; abc < ab + 10; abc++) {
				if (answer < abc)
					break;
				for (abcd = abc; abcd < abc + 10; abcd++) {
					if (answer == abcd) {
						cnt++;
						break;
					}
					if (answer < abcd)
						break;
				}
			}
		}
	}
	return cnt;
}
int main() {
	int n;
	while (scanf(" %d", &n) != EOF) {
		printf("%d\n", solve(n));
	}
	return 0;
}