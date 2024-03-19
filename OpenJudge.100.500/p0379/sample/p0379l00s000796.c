#include<stdio.h>
int main(void){
	int a[100][100],b[100],i,j,k,m,n,x;

	scanf("%d %d",&n,&m);
	for(i=0;i<n;++i){
		for(j=0;j<m;++j){
			scanf("%*c%d",&a[i][j]);
		}
	}
	for(i=0;i<m;++i)scanf("%*c%d",&b[i]);
	for(i=0;i<n;++i){
		for(j=0,x=0;j<m;++j)x=x+a[i][j]*b[j];
	printf("%d\n",x);
	}


	return 0;
}