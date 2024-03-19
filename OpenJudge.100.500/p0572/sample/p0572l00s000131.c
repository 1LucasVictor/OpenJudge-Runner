#include <stdio.h>

#define MOD 2019

int main () {
	long long L, R;
	scanf ("%lld %lld", &L, &R);
	int min = MOD;
	L %= MOD;
	R %= MOD;
	if (L/2019<R/2019) {
		printf ("0\n");
		return 0;
	}
	for (int i=L; i<R; i++) {
		for (int j=i+1; j<=R; j++) {
			int tmp = i*j;
			tmp %= MOD;
			if (tmp < min)
				min = tmp;
		}
	}
	printf ("%d\n", min);
	return 0;
}