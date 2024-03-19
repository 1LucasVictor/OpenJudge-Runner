// AOJ ALDS1_4_D Allocation
// 2018.4.30 bal4u

#include <stdio.h>

#if 1
#define gc() getchar_unlocked()
#else
#define gc() getchar()
#endif
int in()
{
	int n = 0, c = gc();
	do n = 10*n + (c & 0xf), c = gc(); while (c >= '0');
	return n;
}

int n, k;
int w[100002];

int check(int x)
{
	int i, f, s;

	f = 0, s = 0;
	for (i = 0; i < n; i++) {
		if (s + w[i] > x) {
			s = 0;
			if (++f >= k) break;
		}
		s += w[i];
	}
	return ++f <= k;
}

int main()
{
	int i, a, lo, hi, mi;
	
	n = in(), k = in();
	lo = 0, hi = 0;
	for (i = 0; i < n; i++) {
		w[i] = a = in();
		if (a > lo) lo = a;
		hi += a;
	}
	if (k == 1)    { printf("%d\n", hi); return 0; }
	if (check(lo)) { printf("%d\n", lo); return 0; }
	while (lo+1 < hi) {
		mi = (lo + hi) >> 1;
		if (check(mi)) hi = mi; else lo = mi;
	}
	printf("%d\n", hi);
	return 0;
}
