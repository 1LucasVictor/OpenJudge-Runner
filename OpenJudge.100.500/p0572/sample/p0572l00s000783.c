#include<stdio.h>

int main(void) {
	int L, R, l, r;
	scanf("%d%d", &L, &R);
	if (R - L >= 2019) {
		printf("0\n");
	}else {
		l = L % 2019;
		r = R % 2019;
		if (l < r) {
			printf("%d\n", l * (l + 1));
		}else {
			printf("0\n");
		}
	}
	return 0;
}