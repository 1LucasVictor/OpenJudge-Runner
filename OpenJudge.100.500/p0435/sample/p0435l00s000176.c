#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
#include <math.h>

	int main() {
		int n, d, ans = 0;
		long long b, c;
		scanf("%d %d", &n, &d);
		while (n--) {
			scanf("%lld %lld", &b, &c);
			double sum = sqrt(pow(b, 2) + pow(c, 2));
			if (sum <= d)ans++;
		}
		printf("%d", ans);
		return 0;
	}