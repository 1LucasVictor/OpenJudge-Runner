#include <stdio.h>

int main() {
	long long a, b, c, k, output = 0;
	scanf("%lld%lld%lld%lld", &a, &b, &c, &k);
	if (a >= k)output += k;
	else {
		output += a;
		if (b >= (k - a))output += 0;
		else output -= k-a-b;
	}
	printf("%lld", output);
	return 0;
}