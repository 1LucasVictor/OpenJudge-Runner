#include <stdio.h>

int main(void){
	int x[100][100];
	int y[100] = {0};
	int a[100];
	int n,m;
	int i,j,k;

	scanf(" %d %d",&n,&m);
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			scanf("%d",&x[i][j]);
		}
	}
	for(i = 0;i < m;i++){
		scanf(" %d",&a[i]);
	}
	
	for(i = 0;i < n;i++){
		for(j = 0;j < 1;j++){
			for(k = 0;k < m;k++){
				y[i]+=x[i][k]*a[k];
			}
		}
	}
	for(i = 0;i < n;i++){
		printf("%d\n",y[i]);
	}
}