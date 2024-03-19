#include <stdio.h>

#ifdef DEBUG
#define  DPRINT printf
#else
#define DPRINT(...)
#endif

#define W_MAX 10000

int
solve(int n, int k)
{
	int w[n];
	int i, wmin, wmax, wsum, a;
	int lb, rb, p, q, m = 0;

	if (k <= 0)
		return -1;

	wmin = W_MAX, wmax = 0, wsum = 0;
	for (i = 0; i < n; i++) {
		scanf("%d", w + i);
		if (wmin > w[i])
			wmin = w[i];
		if (wmax < w[i])
			wmax = w[i];
		wsum += w[i];
	}

	lb = wsum / k;
	rb = wsum;
	p = (lb + rb) / 2;
	if (lb < wmax)
		lb = wmax;
	for (;lb < rb;) {
		DPRINT("%d %d %d\n", lb, p, rb);
		for (q = a = i = 0, m = 1; i < n && m <= k; i++) {
			if (a + w[i] <= p) {
				a += w[i];
			} else {
				if (q < a)
					q = a;
				a = w[i], m++;
			}
		}
		if (q < a) /* 最後のトラックをチェック */
			q = a;

		if (m < k) {
			DPRINT("<\n");
			rb = q - 1;
			if (rb < lb)
				rb = lb;
		} else if (m > k) {
			DPRINT(">\n");
			lb = (q + wmin < p + 1) ? p + 1 : q + wmin;
			if (rb < lb)
				lb = rb;
		} else {
			DPRINT("=\n");
			rb = q;
			if (rb < lb)
				rb = lb;
		}
		p = (lb + rb) / 2;
	}
	return p;
}

int
main(void)
{
	int n, k;

	scanf("%d%d", &n, &k);
	printf("%d\n", solve(n, k));

	return 0;
}

