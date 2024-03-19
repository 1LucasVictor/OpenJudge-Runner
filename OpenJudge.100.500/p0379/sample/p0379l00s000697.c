#include <stdio.h>

int main(void)
{
	int a[200][200],m,n,b[200],c[200]={},i,j;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++){
		scanf("%d",&b[i]);
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			c[i]=c[i]+a[i][j]*b[j];
		}
	}
	for(i=1;i<=n;i++){
		printf("%d\n",c[i]);
	}
	return 0;
}