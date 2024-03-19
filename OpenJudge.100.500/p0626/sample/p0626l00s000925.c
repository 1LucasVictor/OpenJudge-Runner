#include <stdio.h>
#include <math.h>
int main() {
		int A, B;
		long shou = 0;
		double ret;
		scanf("%d %d", &A, &B);
		if (A == 0) {
			shou = B / 100;
		}
		else if(A ==1 ) {
			shou = (B * 100) / 10000;
		}
		else {
			shou = (B * 10000) / 1000000;
 
		}
		ret = pow(100, A) * B + shou;
		printf("%.lf\n", ret);
		return 0;
}