#include <stdio.h>
int main(void)
{
	int n, m, i, j;
	
	scanf("%d %d\n",&n, &m);
	int A[n][m]; int b[m]; int c[n];
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&A[i][j]);
		}
	}
	
	for(j=0;j<m;j++){
		scanf("%d",&b[j]);
	}
	
	//積の計算
	for(i=0;i<n;i++){
		c[i] = 0;
		for(j=0;j<m;j++){
			c[i] += A[i][j] * b[j];
		}
		printf("%d\n",c[i]);
	}
	
	return 0;
}
