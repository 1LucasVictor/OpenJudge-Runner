#include <stdio.h>

#define MAX 100000
long T[MAX];
int n, k;

int check(long P) {
	int j, i = 0;
	long s;
	
	for (j = 0; j < k; j++) {
		s = 0;
		while( s + T[i] <= P) {
			s += T[i];
			i++;
			if (i == n) return n;
		}
	}
	return i;
}

int solve() {
	long left = 0;
	long right = 100000 * 10000;
	long mid;
	int v;

	while ( right -left > 1) {
		mid = (left + right) / 2;
		v = check(mid);
//		printf("%ld %ld %ld %d\n", left, mid, right ,v);
		if (v >= n) {
			right = mid;
		} else {
			left = mid;
		}
	}
	return  right;
}

int main(void) {
	int i;
	scanf("%d %d", &n, &k);

	for (i = 0; i < n; ++i) {
		scanf(" %ld", &T[i]);
	}
	printf("%d\n", solve());
	return 0;
}