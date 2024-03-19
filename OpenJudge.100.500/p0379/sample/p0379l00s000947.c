#include<stdio.h>
int main(){
	int a,b,n,m,i,j,x[101][101],v,w[101],o[101][101],f[101];
	scanf("%d %d",&n,&m);
	for(a=1;a<=n;a++){
		for(b=1;b<=m;b++){
			scanf("%d",&v);
			x[a][b]=v;
		}
	}
	for(b=1;b<=m;b++){
		scanf("%d",&w[b]);
	}
	for(a=1;a<=100;a++){
		f[a]=0;
	}
	for(a=1;a<=n;a++){
		for(b=1;b<=m;b++){
			f[a]=f[a]+x[a][b]*w[b];
		}
	}
	for(a=1;a<=n;a++){
		printf("%d\n",f[a]);
	}
	return 0;
}
