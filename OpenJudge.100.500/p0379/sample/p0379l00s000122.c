#include<stdio.h>

int main(void) {

	int n, m, i, j, k;
	int a[100][100];
	int b[100];
	int c[100];
	int ans[100] = { 0 };

	scanf("%d %d", &n, &m);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	for (j = 0; j < m; j++) {

		scanf("%d", &b[j]);
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			
			c[i] = a[i][j] * b[j];

			for (i = 0; i < n; i++) {
				for (j = 0; j < m; j++) {
					
					for (k = 0; k < n; k++) {

						ans[i] += a[i][j] * b[j];
						c[i] = ans[i];


					}
				}
				printf("%d ", c[i]/n);

			}
		

			
			

		}
	}

	return(0);
}
