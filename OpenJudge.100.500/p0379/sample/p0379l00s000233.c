#include <stdio.h>

int main(){
	int n,m;
	int a[100][100];
	int b[100],c[100]={0};
	int i,t;
	scanf("%d %d",&n, &m);
	for(i = 0;i < n; i++){
		for(t = 0;t < m; t++){
			scanf("%d", &a[i][t]);
		}
	}
	for(t =0;t < m; t++){
		scanf("%d", &b[t]);
	}
	for(i = 0;i < n; i++){
		for(t = 0;t < m; t++){
			c[i] += a[i][t] * b[t];
		}
	}
	for(i = 0;i < n; i++){
		printf("%d\n", c[i]);
	}
	return 0;
}