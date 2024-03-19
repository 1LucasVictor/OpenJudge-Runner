#include <stdio.h>
#define MIN(x,y) ((x) < (y) ? (x) : (y))

int main(void) {
	int n, x, i, j, k, p, q, r, c;
	for(;;) {
		scanf("%d %d", &n, &x);
		if ((n == 0) && (x == 0)) {
			break;
		}
		c = 0;
		for (i = n; i>0; i--) {
			p = x - i;
			for (j = MIN(p,i-1); j>0; j--) {
				for (k = MIN((q=p-j),j-1); ((r=q-k)>=0)&(k>0); k--) {
					if (!r) {
						c++;
					}
				}
			}
		}
		printf("%d\n", c);
	}
	return 0;
}