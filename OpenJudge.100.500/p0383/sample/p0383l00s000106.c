#include<stdio.h>
int main(void){
	int a[101][101],b[101][101],c[101][101],i,j,k,m,n,l,x,r,f;
	char d;

	scanf("%d %d %d",&m,&n,&l );
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			scanf("%*c%d",&a[i][j] );
		}
	}
	for(i=0;i<n;++i){
		for(j=0;j<l;++j){
			scanf("%*c%d",&b[i][j] );
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			for(k=0,c[i][j]=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<m;++i){
		for(j=0;j<l;++j){
			if(j==l-1){
				printf("%d",c[i][j] );
			}
			else printf("%d ",c[i][j]);
		}
		printf("\n" );
	}
	return 0;
}