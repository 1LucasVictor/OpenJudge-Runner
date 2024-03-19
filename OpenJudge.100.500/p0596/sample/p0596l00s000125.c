#include <stdio.h>
#include <string.h>

int main() {
	int N, i, count0 = 0, count1 = 0, ans;
	char S[100000];

	scanf("%s", S);

	N = strlen(S);
	for (i = 0; i < N; i++) {
		if (S[i] == '0') {
			count0++;
		}
		else {
			count1++;
		}
	}

	if (count0 < count1) {
		ans = count0 * 2;
	}
	else {
		ans = count1 * 2;
	}

	printf("%d", ans);

	return 0;
}