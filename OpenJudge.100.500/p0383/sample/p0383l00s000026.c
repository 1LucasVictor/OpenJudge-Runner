#include<stdio.h>
int main(){
	int n, m, l, i, j, k=0, a[100][100], b[100][100];
	long long c[100][100] = {};
	scanf("%d %d %d", &n, &m, &l);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			scanf("%d", &b[i][j]);
		}
	}
	while(k!=m){
		for(i=0;i<n;i++){
			for(j=0;j<l;j++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
		k++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			printf("%ld", c[i][j]);
			if(j != l-1) printf(" ");
			else printf("\n");
		}
	}
}
