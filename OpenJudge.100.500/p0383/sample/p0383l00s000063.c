#include <stdio.h>

int main(){
	int n,m,l;
	int a[100][100], b[100][100], c[100][100];
	int i,t,s;
	scanf("%d %d %d", &n, &m, &l);
	for(i = 0;i < n; i++){
		for(t = 0;t < m; t++){
			scanf("%d", &a[i][t]);
		}
	}
	for(i = 0;i < m; i++){
		for(t = 0;t < l; t++){
			scanf("%d", &b[i][t]);
		}
	}
	for(i = 0;i < n; i++){
		for(t = 0;t < l; t++){
			c[i][t] = 0;
			for(s = 0;s < m; s++){
				c[i][t] += a[i][s] * b[s][t];
			}
		}
	}
	for(i = 0;i < n;i++){
		for(t = 0;t < l;t++){
			printf("%d", c[i][t]);
			if(t==l-1)puts("");
			else printf(" ");
		}
	}

	return 0;
}