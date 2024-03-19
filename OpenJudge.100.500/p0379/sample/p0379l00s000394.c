
#include <stdio.h>

int main(void)
{
	int A[100][100];
	int b[100];
	int c,i,j,n,m;
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
		c=0;
		for(j=0;j<m;j++){
			c+=A[i][j]*b[j];
		}
		printf("%d\n",c);
	}
	
	return 0;
}


