#include <stdio.h>

int main(void){
	int n, m, i, t;
	int gyou[100][100];
	int retu[100];
	int sum[100] = { 0 };

	scanf("%d%d", &n, &m);

	for (i = 0; i<n; i++) {
		for (t = 0; t<m; t++) {
			scanf("%d", &gyou[i][t]);
		}
		
	}

	for (i = 0; i<m; i++) {
		scanf("%d", &retu[i]);
	}

	for (i = 0; i<n; i++) {
		for (t = 0; t<m; t++) {
			sum[i] += gyou[i][t] * retu[t];
		}
	}
	for (i = 0; i<n; i++) {
		printf("%d\n", sum[i]);
	}

    return 0;
}
