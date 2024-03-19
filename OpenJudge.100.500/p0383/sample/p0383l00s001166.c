#include<stdio.h>
int main(){
	int  a,b,c,d,e,f,g,n,m,j;
	int nm[100][100],mj[100][100],C[100][100];
	scanf("%d %d %d",&n,&m,&j);
	for(a=0;a<n;a++){
		for(b=0;b<m;b++){
		scanf("%d",&nm[a][b]);
		}
	}
	for(a=0;a<m;a++){
		for(b=0;b<j;b++){
			scanf("%d",&mj[a][b]);
		}
	}
	for(a=0;a<n;a++){
		for(b=0;b<j;b++){
			for(c=0;c<m;c++){
				C[a][b]+=nm[a][c]*mj[c][b];
			}
			printf("%d",C[a][b]);
			if(b<j-1)
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}