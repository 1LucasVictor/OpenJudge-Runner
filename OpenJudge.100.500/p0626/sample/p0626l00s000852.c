#include <stdio.h>
#include <math.h>
int main() {
	int A, B;
	double ret;
	scanf("%d %d", &A, &B);
	ret = pow(100, A) * B;
	printf("%.lf\n", ret);
	return 0;
}

