#include<stdio.h>
int main(void)
{
	int N,M,A[105][105],B[105],i,j,t;
	
	scanf("%d%d",&N,&M);
	
	for(i=0;i<N;i++)
		for(j=0;j<M;j++)
			scanf("%d",&A[i][j]);
	for(i=0;i<M;i++)
		scanf("%d",&B[i]);

	for(i=0;i<N;i++){
		for(j=t=0;j<M;j++)
		t+=A[i][j]*B[j];
		printf("%d\n",t);
		}
return 0;
}

