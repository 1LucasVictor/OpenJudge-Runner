#include <stdio.h>
int main(void) {
	int a[100][100] = {};
	int b[100][100] = {};
	int n,m,l,i,j,k;
	long long s;
	scanf("%d %d %d\n",&n,&m,&l);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<l;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<l;j++){
			if(j){printf(" ");}
			for(k=0,s=0;k<m;k++){
				s+=a[i][k]*b[k][j];
			}
			printf("%lld",s);
		}
		printf("\n");
	}
	return 0;
}