#include<stdio.h>
int main(){
	int n,m,l,i,j,k,t,a[100][100],b[100][100],c[100][100];
	scanf("%d %d %d",&n,&m,&l);
	for(i=0;i<n;i++)for(j=0;j<m;j++)scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)for(j=0;j<l;j++)scanf("%d",&b[i][j]);
	for(i=0;i<100;i++)for(j=0;j<100;j++)c[i][j]=0;
	for(i=0;i<n;i++)for(j=0;j<l;j++){
		t=0;
		for(k=0;k<m;k++)t+=a[i][k]*b[k][j];
		c[i][j]=t;
	}
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			if(j!=l-1)printf("%d ",c[i][j]);
			else printf("%d\n",c[i][j]);
		}
	}
	return 0;
}