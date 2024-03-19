// AtCoder ABC133: C - Remainder Minimization 2019
// 2019.9.2 bal4u

#include <stdio.h>

int a[4050];
int main()
{
	int i, j, t, L, R, ans;
	
	scanf("%d%d", &L, &R);
	if (R - L >= 4040) { puts("0"); return 0; }
	j = 0; for (i = L; i <= R; i++) a[j++] = i % 2019;
	ans = 2019, R = j;
	for (i = 0; i < R; i++) for (j = i+1; j < R; j++) {
		t = a[i]*a[j] % 2019;
		if (t < ans) ans = t;
	}
	printf("%d\n", ans);
	return 0;
}
