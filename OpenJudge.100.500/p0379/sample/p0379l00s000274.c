#include<stdio.h>
int main(void)
{
	int A[100][100],b[100],m,n,c[100],i,j;
	scanf("%d",&m); scanf("%d",&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(j=0;j<n;j++)
		scanf("%d",&b[j]);
	for(i=0;i<m;i++){
		c[i] = 0;
		for(j=0;j<n;j++){
			c[i] = c[i] +A[i][j]*b[j];
		}
		printf("%d\n",c[i]);
	}
	return 0;
}
