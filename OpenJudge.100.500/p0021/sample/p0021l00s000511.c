#include<stdio.h>
int main()
{
	int n, a[5000], i, j, s, smax;
	while(scanf("%d", &n), n) {
		for (i = 0; i < n; i ++)
			scanf("%d", a+i);
		smax = a[0];
		for (i = 0; i < n; i ++) {
			s = 0;
			for (j = i; j < n; j ++) {
				s += a[j];
				if (s > smax)
					smax = s;
			}
		}
		printf("%d\n", smax);
	}
	return 0;
}