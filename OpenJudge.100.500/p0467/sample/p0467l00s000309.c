#include <stdio.h>
int main() {
	double  a, b, c, k,sum=0;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &k);
	for (int i = 0;i < k;i++) {
		if (a != 0) {
			a--;
			sum += 1;
		}
		else if (b != 0) {
			b--;
			sum += 0;
		}
		else if (c != 0) {
			c--;
			sum += -1;
		}
	}
	printf("%0.0f\n", sum);
	return 0;
}