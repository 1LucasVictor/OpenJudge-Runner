#include <stdio.h>

int main() {
	unsigned long long a, b, c, k, output = 0;
	scanf("%llu%llu%llu%llu", &a, &b, &c, &k);
	if (a >= k)output = a;
	else {
		output += a;
		if (b >= (k - a))output += 0;
		else output -= c;
	}
	printf("%llu\n", output);
	return 0;
}