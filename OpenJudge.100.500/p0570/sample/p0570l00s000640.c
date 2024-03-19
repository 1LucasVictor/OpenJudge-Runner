#include <stdio.h>
int main(void) {
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if ((a + b) % 2 == 1) {
		printf("IMPOSSIBLE\n");
		return 0;
	}
	else
		printf("%lld", (a + b) / 2);
	return 0;
}