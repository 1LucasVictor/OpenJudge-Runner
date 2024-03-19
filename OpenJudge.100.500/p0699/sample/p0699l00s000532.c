#include <stdio.h>

int main(void) {
	int i;
	int cnt[11] = {0};

	for (i = 0; i < 3; i++) {
		int x;
		scanf("%d", &x);
		cnt[x]++;
	}

	puts(cnt[5] == 2 && cnt[7] == 1 ? "YES" : "NO");

	return 0;
}
