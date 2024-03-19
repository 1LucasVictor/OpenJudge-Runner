#include<stdio.h>
int main(){
	int n,m,z1[100][100],z2[100],sum[100]={0};
	int a,b,c,d,e,f,g;
	scanf("%d %d",&n,&m);
	for(a=0;a<n;a++){
		for(b=0;b<m;b++){
			scanf("%d",&z1[a][b]);
		}
	}
	for(a=0;a<m;a++){
		scanf("%d",&z2[a]);
	}
	for(a=0;a<n;a++){
		for(b=0;b<m;b++){
			sum[a]+=z1[a][b]*z2[b];
		}
	}
	for(a=0;a<n;a++){
		printf("%d\n",sum[a]);
	}
	return 0;
}