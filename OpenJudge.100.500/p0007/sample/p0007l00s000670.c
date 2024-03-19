#include<stdio.h>
int main()
{
	int n, a, b, c, d, m;
	while (scanf("%d", &n)>0) {
		m = 0;
		for (a = 0; a <= 9; a ++) {
			for (b = 0; b <= 9; b ++) {
				for (c = 0; c <= 9; c ++) {
					for (d = 0; d <= 9; d ++) {
						if (a+b+c+d == n)
							m++;
					}
				}
			}
		}
		printf("%d\n", m);
	}
	return 0;
}