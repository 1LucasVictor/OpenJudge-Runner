#include<stdio.h>
int main(void){
	int a[101][101],b[101],c[101],n,m,i,j,sum;
	scanf("%d %d",&n,&m);
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i = 0;i < m;i++){
		scanf("%d",&b[i]);
	}
	for(i = 0;i < n;i++){
		sum = 0;
		for(j = 0;j < m;j++){
			sum += (a[i][j]*b[j]);
		}
		c[i] = sum;
	}
	for(i = 0;i < n;i++){
		printf("%d\n",c[i]);
	}
	
	return 0;
}