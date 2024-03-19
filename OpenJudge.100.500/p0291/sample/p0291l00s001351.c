#include<stdio.h>

int main(void)
{
	int n,i,j,M=0;
	scanf("%d",&n);
	int R[200000];
	for(i=0;i<n;i++){
		scanf("%d",&R[i]);
		}
	for(i=0;i<n;i++){
		for(j=1;j<n;j++){
			if(R[j]-R[i]>M){
			M = R[j]-R[i];
			}
		}
	}
	printf("%d\n",M);
	
	return 0;
}	
			
			
			
	
