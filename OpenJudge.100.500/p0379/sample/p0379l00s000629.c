#include <stdio.h>
int main(void){
	//scan
	int n,m;
	scanf("%d %d\n",&n,&m);
	int a[n][m];
	int b[m][1];
	int c[n][1];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(j==m-1){
				scanf("%d\n",&a[i][j]);
			}else{
				scanf("%d ",&a[i][j]);
			}
		}
	}
	int k;
	for(k=0;k<m;k++){
		scanf("%d\n",&b[k][0]);
	}
	//end scan
	int l;
	for(l=0;l<n;l++){
		int x;
		c[l][0] = 0;
		for(x=0;x<m;x++){
			c[l][0] = c[l][0] + (a[l][x]*b[x][0]);
		}
	}
	int y;
	for(y=0;y<n;y++){
		printf("%d\n",c[y][0]);
	}
	return 0;
}