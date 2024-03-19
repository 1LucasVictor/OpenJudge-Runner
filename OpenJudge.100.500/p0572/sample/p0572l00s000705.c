#include<stdio.h>
#include<math.h>

int main() {
	long long L, R, a, b;
	long long ans;
	
	if (scanf("%lld %lld", &L, &R) == 2) {

		if ((L / 2019) == (R / 2019)) {
			ans = (L % 2019)*(L % 2019 + 1);
		}
		else {
			ans = 0;
		}

		printf("%lld", ans);
		return 0;
	}
}