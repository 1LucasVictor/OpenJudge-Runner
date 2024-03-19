#include <stdio.h>
#include <math.h>
int main() {
		int A, B;
		double shou;
		double ret;
		scanf("%d %d", &A, &B);
		if (A == 0) {
			shou = B / 100;
		}
		ret = pow(100, A) * B + shou;
		printf("%.lf\n", ret);
		return 0;
}
