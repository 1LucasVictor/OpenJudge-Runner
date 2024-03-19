#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n,i,j,u,k,tmp;
	int list[100][100]={};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&u);
		scanf("%d",&k);
		for(j=0;j<k;j++){
			scanf("%d",&tmp);
			list[u-1][tmp-1]=1;
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",list[i][j]);
			if(j==n-1){break;}
			printf(" ");
		}printf("\n");
	}

	return 0;
}