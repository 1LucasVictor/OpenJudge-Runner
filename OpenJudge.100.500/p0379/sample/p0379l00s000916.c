#include "stdio.h"

int main(){
	
	int n,m,a[100][100],b[100],i,j,x;
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(j=0;j<m;j++){
		scanf("%d", &b[j]);
	}
	for(i=0;i<n;i++){
		x=0;
		for (j=0; j<m; j++){
			x += a[i][j] * b[j];			
		}
		printf("%d\n", x);
	}
	return 0;
}