#include <stdio.h>
int main() {
	double  a, b, c, k, sum = 0;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &k);
	if ((k - a - b) >= 1) { //cまで到達する
		sum += -1 * (k - a - b);
		sum += a;
	}
	else sum += a;
	printf("%0.0f\n", sum);
	return 0;
}