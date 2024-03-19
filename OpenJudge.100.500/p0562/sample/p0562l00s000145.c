// AtCoder ABC139: B - Power Socket
// 2019.9.2 bal4u

#include <stdio.h>

int main()
{
	int A, B, a, b, ans;
	
	scanf("%d%d", &A, &B);
	a = A, b = A, ans = 1;
	while (b < B) {
		ans++, b += A-1, a--;
		if (b >= B) break;
		if (a <= 0) {
			if (b > B) a = 1, b--;
			else ans++, b += A-1, a = A;
		}
	}
	printf("%d\n", ans);
	return 0;
}
