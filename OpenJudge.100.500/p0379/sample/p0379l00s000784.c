#include<stdio.h>
int main(){
	int A[100][100];
	int b[100],c[100];
	int i,j,n,m,t;

	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		scanf("%d",&t);
		A[i][j]=t;
		}	
	}
	for(i=0;i<n;i++){
		scanf("%d",&t);
		b[i]=t;
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i]+=A[i][j]*b[j];
		}
	}
	for(i=0;i<m;i++){
	printf("%d\n",c[i]);
	}
	return 0;
}