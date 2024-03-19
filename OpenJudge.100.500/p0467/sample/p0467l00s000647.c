#include <stdio.h>
int main(){
	int a,b,c,k;
	int i, j = 0, m;
	long sum = 0;
	scanf("%d%d%d%d", &a, &b, &c, &k);
	
	for (i = 0; i < k; i++) {
		while (a > 0) {
			if (i > k - 1)
				break;
			sum++;
			a--;
			i++;
		}
		while (b > 0) {
			if (i > k - 1)
				break;
			b--;
			i++;
		}
		while (c > 0) {
			if (i > k - 1)
				break;
			sum--;
			c--;
			i++;
		}

	}
	printf("%ld", sum);
	return 0;
}