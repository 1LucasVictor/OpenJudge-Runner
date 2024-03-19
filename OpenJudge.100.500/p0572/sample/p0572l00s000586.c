#include<stdio.h>
#include<math.h>

int main() {
	long L, R, a, b;
	long ans;
	
	if (scanf("%ld %ld", &L, &R) == 2) {

		if ((L / 2019) == (R / 2019)) {
			ans = (L % 2019)*(L % 2019 + 1);
		}
		else {
			ans = 0;
		}

		printf("%ld", ans);
		return 0;
	}
}