#include <stdio.h>

int main() {
	long str[200000];
	int N, i, j, k, flag=0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &str[i]);
	}

	for (i = 0; i < N; i++) {
		for (j = i + 1; i < N-1; i++) {
			if (str[j] > str[i]) {
				k = str[j];
				str[j] = str[i];
				str[i] = k;
			}
		}
	}

	for (i = 0; i < N-1; i++) {
		if (str[i] == str[i + 1]) {
			flag = 1;
			break;
		}
	}

	if (flag == 0) {
		printf("YES");
	}
	else {
		printf("NO");
	}

	
	return 0;
}