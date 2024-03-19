#include <stdio.h>
#define MIN(x,y) ((x) < (y) ? (x) : (y))

int main(void) {
	int n, x, i, j, p, q, c;
	for(;;) {
		scanf("%d %d", &n, &x);
		if ((n == 0) && (x == 0)) {
			break;
		}
		c = 0;
		for (i = n; i>0; i--) {
			p = x - i; 
			for (j = MIN(p,i-1); j>1; j--) {
				q = p - j;
				if ((q>0)&(q<j)) {
					c++;
				} else if (q>=j) {
					break;
				}
			}
		}
		printf("%d\n", c);
	}
	return 0;
}