#include <stdio.h>
#include <stdlib.h>

int main(void) {

	/* 値の入力 */
	int N, M;
	scanf("%d %d", &N, &M);
	int* s;
	int* c;
	char* a;
	s = (int*)calloc(sizeof(int), M);
	c = (int*)calloc(sizeof(int), M);
	a = (char*)calloc(sizeof(char), N);
	for (int i = 0; i < M; ++i) {
		scanf("%d %d", &s[i], &c[i]);
	}

	/* 最小の値を求める */
	for (int i = 0; i < M; ++i) {
		/* '\0'だったらcharに変換して代入 */
		if (a[s[i] - 1] == '\0') {
			a[s[i] - 1] = '0' + c[i];
			continue;
		}
		/* もともと入っていた値より小さければ代入 */
		if (a[s[i] - 1] > '0' + c[i]) {
			a[s[i] - 1] = '0' + c[i];
		}
	}
	/* 間の'\0'を0に変換 */
	for (int i = 1; i < 3; ++i) {
		if (a[i - 1] != '\0' && a[i] == '\0') {
			a[i] = '0';
		}
	}

	/* 結果の出力 */
	switch (N) {
	case 3 : {
		if (a[0] == '\0') {
			puts("-1");
		}
		else if (a[0] == '0') {
			puts("-1");
		}
		else {
			printf("%s\n", a);
		}
		break;
	}
	case 2 : {
		if (a[1] == '\0' || a[0] != '\0') {
			puts("-1");
		}
		else if (a[1] == '0') {
			puts("-1");
		}
		else {
			printf("%s\n", a);
		}
		break;
	}
	case 1 : {
		if (a[2] == '\0' || a[1] != '\0' || a[0] != '\0') {
			puts("-1");
		}
		else {
			printf("%s\n", a);
		}
	}
	}

	free(s);
	free(c);
	free(a);

	return 0;
}