#include <stdio.h>

int main(void) {
	int i, j, n, m, k;
	int a[200005];
	int b[200005];
	unsigned long long int sum[100][100];
	int ans = 0;

	sum[0][0] = 0;

	scanf("%d %d %d", &n, &m, &k);

	for(i=0; i<n; i++) {
		scanf("%d", &a[i]);
		
		sum[i+1][0] += sum[i][0] + a[i];
	}

	for(j=0; j<m; j++) {
		scanf("%d", &b[j]);

		sum[0][j+1] += sum[0][j] + b[j];
	}

/*
	for(i=0; i<=n; i++) {
		for(j=0; j<=m; j++) {
			printf("%d ", sum[i][j]);
	 	}
	 	printf("\n");
	}
*/

	for(i=1; i<=n; i++) {
		for(j=1; j<=m; j++) {
			
			/*
			sum[i][j] = sum[i][0] + sum[0][j];

			if(sum[i][j] > k) {
				break;
			}
			*/

			if(sum[i][0] + sum[0][j] <= k) {
				if((i + j) > ans) {
					ans = i + j;
				}
			}
	 	}
	}

/*
	for(i=0; i<=n; i++) {
		for(j=0; j<=m; j++) {
			printf("%d ", sum[i][j]);
	 	}
	 	printf("\n");
	}

	printf("\n");
*/
	printf("%d", ans);



	return 0;
}