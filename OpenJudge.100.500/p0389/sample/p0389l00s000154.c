#include<stdio.h>
#include<string.h>
#define anD &&
#define oR ||
#define max(a,b) ((a)>(b))?(a):(b)
#define min(a,b) ((a)<(b))?(a):(b)
#define rep(i,n) for((i)=0;(i)<(n);(i)++)

int main(void) {
	int i, n, h, m, st, j;
	char a[201];
	while (1) {

		scanf("%s", a);
		if (a[0] == '-') break;
		st = strlen(a);

		scanf("%d", &m);

		for (i = 0; i < m; i++) {
			char temp[201] = {};

			scanf("%d", &h);
			for (j = 0; j < h; j++) {
				temp[j] = a[j];
			}
			for (j = 0; j < st - h; j++) {
				a[j] = a[j + h];
			}
			for (j = 0; j < h; j++) {
				a[st - h + j] = temp[j];

			}
		}
		a[st] = '\0';
		printf("%s\n", a);

	}
	return 0;
}