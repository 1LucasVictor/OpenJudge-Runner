#include<stdio.h>
int main()
{
	int n,m,i,j;
	
	scanf("%d %d",&n,&m);
	
	int A[n][m],b[m],c[n];
	
	for(i=0;i<n;i++){
		c[i]=0;		
	}
	
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
	}
	
	for(i=0;i<n;i++){
		printf("%d\n",c[i]);		
	}
	
	return 0;
}