// AOJ ALDS1_13_A 8 Queens Problem
// 2018.5.4 bal4u

#include <stdio.h>

char q[8];
char a[8], b[8], u[16], v[16];  // 衝突検出用 a:縦上下、b:横左右、u,v: 斜め方向

void found()
{
	int r, c;

	for (r = 0; r < 8; r++) {
		for (c = 0; c < 8; c++) {
			if (q[r] == c) putchar('Q');
			else           putchar('.');
		}
		putchar('\n');
	}
}

int check(int r)
{
	int c;

	if (r == 8) { found(); return 1; }
	if (b[r]) {	if (check(r+1)) return 1; }
	for (c = 0; c < 8; c++) {
		if (b[r] || a[c] || u[r+c] || v[r-c+7]) continue;
		a[c] = u[r+c] = v[r-c+7] = 1;
		q[r] = c;
		if (check(r+1)) return 1;
		a[c] = u[r+c] = v[r-c+7] = 0;
	}
	return 0;
}

int main()
{
	int k, r, c;

	scanf("%d", &k);
	while (k--) {
		scanf("%d%d", &r, &c);
		q[r] = c;
		a[c] = b[r] = u[r+c] = v[r-c+7] = 1;
	}
	check(0);
	return 0;
}

