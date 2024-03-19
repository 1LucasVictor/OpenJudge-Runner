#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int canLoad(int P, int w[], int n, int k) {
	int k2 = 0;
	int temp;
	int i=0;
	while (++k2 <= k) {
		temp = P;
		while (temp > 0) {
			if (++i <= n) {
				temp -= w[i];
			}
			else {
				return 1;
			}
		}
		if(temp !=0){
			--i;
		}
	}
	return 0;
}

int main() {
	int n, k;
	int w[100001];
	int c;
	int *a;
	int lowerBoundP, upperBoundP;
	int midP;

	scanf("%d%d", &n, &k);
	c = n;
	a = w;
	int maxW = 0;
	while (c--) {
		scanf("%d", ++a);
		if (*a > maxW) {
			maxW = *a;
		}
	}

	if (n <= k) {
		printf("%d\n", maxW);
		return 0;
	}

	lowerBoundP = maxW - 1;
	upperBoundP = maxW * n;
	
	while (lowerBoundP + 1 != upperBoundP) {
		midP = (lowerBoundP + upperBoundP) / 2;
		if (canLoad(midP, w, n, k) == 1) {
			upperBoundP = midP;
		}
		else {
			lowerBoundP = midP;
		}
	}

	printf("%d\n", upperBoundP);

	return 0;
}