#include <stdio.h>
int main(){
	int i,j,k,l,n,m,A[100][100],b[100],data[100]={0};
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		for(k=0;k<m;k++){
			scanf("%d",&A[i][k]);
		}
	}
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	l=0;
	for(i=0;i<n;i++){
		for(k=0;k<m;k++){
				data[i]+=A[i][k]*b[k];
		}
		printf("%d\n",data[i]);
	}
	return 0;
}
		
