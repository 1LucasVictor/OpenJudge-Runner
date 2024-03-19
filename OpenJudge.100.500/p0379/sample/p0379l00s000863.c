#include<stdio.h>
int main(){
	int A[101][101];
	int b[101];
	int ans[101];
	int i,j,m,n;
	
	scanf("%d %d",&m,&n);
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	
	for(j=0;j<n;j++){
		scanf("%d",&b[j]);
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			ans[i]+=(A[i][j]*b[j]);
		}
		printf("%d\n",ans[i]);
	}
	
	return 0;
}