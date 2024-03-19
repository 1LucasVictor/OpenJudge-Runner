#include<math.h>
int main(void) {
	int N, D;
	scanf("%d", &N);
	scanf("%d", &D);
	
	int i, m, n = 0, a, b;
		int x[100], y[100];
		double s;
	for (i = 0; i < N; i++) {
		scanf("%d %d", &x[i], &y[i]);
		a = x[i];
		b = y[i];
		m = pow(a, 2) + pow(b, 2);
		s = sqrt(m);
		if (s <= D) {
			n++;
		}
	}
	printf("%d\n", n);
	return 0;
}