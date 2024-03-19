// AtCoder ABC125: A - Biscuit Generator
// 2019.9.9 bal4u

#include <stdio.h>

int main()
{
	int A, B, T, t, ans;
	
	scanf("%d%d%d", &A, &B, &T);
	ans = 0; for (t = A; t <= T; t += A) ans += B;
	printf("%d\n", ans);
	return 0;
}
