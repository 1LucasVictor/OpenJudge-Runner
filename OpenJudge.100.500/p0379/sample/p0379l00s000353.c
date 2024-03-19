#include <stdio.h>

int main(void)
{
	int A[100][100];
	int b[100];
	int c[100];
	int i,j,n,m;
	
	scanf("%d %d",&n,&m);
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i]+=A[i][j]*b[j];
		}
		printf("%d\n",c[i]);
	}
	
	return 0;
}