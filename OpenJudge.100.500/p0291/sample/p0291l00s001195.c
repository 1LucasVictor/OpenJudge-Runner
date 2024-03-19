#include<stdio.h>

int main(void)
{
	int i, j, R[200000],n, m = -1, d;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &R[i]);
	}

	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			d = R[j] - R[i];
			if (m < d) m = d;
		}
	}
	printf("%d\n", m);

	return 0;
}

