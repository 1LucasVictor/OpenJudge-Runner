#include<stdio.h>
#include<memory.h>
char prime[1000000];
int main()
{
	int n, m, c, i;
	while (scanf("%d", &n)>0) {
		memset(prime, 1, sizeof(prime));
		c = 0;
		for (m = 2; m <= n; m ++) {
			if (prime[m])
				c ++;
			for (i = m; i <= n; i += m)
				prime[i] = 0;
		}
		printf("%d\n", c);
	}
	return 0;
}