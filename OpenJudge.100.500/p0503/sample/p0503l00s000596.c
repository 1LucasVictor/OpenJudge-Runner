#include <stdio.h>

int YorN(int N, long s[]) {
	int flag = 0, i, j;
	for (i = 0; i < N; i++) {
		for (j = i + 1; j < N; j++) {
			if (s[i] == s[j]) {
				flag = 1;
			}
		}
	}
	return flag;
}

int main() {
	long str[200000];
	int N, i, j;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &str[i]);
	}
	j = YorN(N, str);

	if (j == 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	
	return 0;
}