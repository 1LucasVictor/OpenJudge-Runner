#include <stdio.h>
int main(void){
	int n,m,i,j,k;
	scanf("%d %d",&n,&m);
	int a[n][m],b[m],c[m],term;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i]=a[i][j]*b[j];
			term=0;
			for(k=0;k<m;k++){
				term=term+a[i][k]*b[k];
			}
			
		}
		c[i]=term;
		printf("%d\n",c[i]);
	}
	return 0;
}
