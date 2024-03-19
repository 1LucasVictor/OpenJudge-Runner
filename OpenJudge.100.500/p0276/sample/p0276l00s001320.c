#include <stdio.h>
int main(){
	int i,j,A[101][101],n,a,b,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			A[i][j]=0;
		}
	}
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		for(j=0;j<b;j++){
			scanf("%d",&c);
			A[a][c]=1;
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("%d",A[i][j]);
			if(j<n)
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
