#include<stdio.h>
#include<math.h>
#include <string.h>


int main() {
	int i, j, k;
//	long long int l = 0;
	int m, g = 0, n, q, b, c, d, e;
	int f = 0;
	int buka[110000] = {0};

	scanf("%d", &n);

	for (i = 1;i < n;i++) {
		scanf("%d", &m);
		buka[m] = buka[m] + 1;
	}

	for (i = 1;i < n+1;i++) {
		printf("%d\n", buka[i]);
	}

	

	return 0;
}