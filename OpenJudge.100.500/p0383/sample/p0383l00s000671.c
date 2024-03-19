#include<stdio.h>
int main(void){
	int a[101][101],b[101][101],c[101][101]={0},n,m,l,i,j,k;
	scanf("%d %d %d",&n,&m,&l);
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(j = 0;j < m;j++){
		for(k = 0;k < l;k++){
			scanf("%d",&b[j][k]);
		}
	}
	for(i = 0;i < n;i++){
		for(k = 0;k < l;k++){
			for(j = 0;j < m;j++){
				c[i][k] += a[i][j]*b[j][k];
			}
		}
	}
	for(i = 0;i < n;i++){
		for(k = 0;k < l;k++){
			printf("%d",c[i][k]);
			if(k < l-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}