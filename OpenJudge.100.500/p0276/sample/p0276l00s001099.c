#include <stdio.h>
#define N 1000


int main(){
	int a[N][N];
	int n,k,u,i,j,v;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&u);
		scanf("%d",&k);
		for(j=0;j<k;j++){
			scanf("%d",&v);
			a[u-1][v-1] = 1;
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
			if(j!=n-1)printf(" ");
		}
		printf("\n");
	}
return 0;
}