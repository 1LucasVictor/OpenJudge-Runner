#include<stdio.h>
#define MAX 100
int main() {
	int n,i,j,l,r,a,g[MAX][MAX];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)g[i][j]=0;
	}
	
	for(i=0;i<n;i++){
		scanf("%d %d",&l,&r);
		for(j=0;j<r;j++){
			scanf("%d",&a);
			g[l-1][a-1] = 1;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if (j > 0) printf(" ");
			printf("%d", g[i][j]);
		}
		printf("\n");
	}
	return 0;
}
