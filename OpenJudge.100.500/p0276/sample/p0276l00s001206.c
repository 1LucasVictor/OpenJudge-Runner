#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,count,i,l,j,num;
	int **a;

	scanf("%d",&n);

	a = (int**)malloc(sizeof(int*)*n);
	for( i = 0 ; i < n ; i++ ) a[i] = (int*)malloc(sizeof(int)*n);

	for( i = 0 ; i < n ; i++ ) a[i][i] = 0;

	for( i = 0 ; i < n ; i++ ){
		scanf("%d",&l);
		if( i + 1 != l ) break;
		scanf("%d",&count);
		for( j = 0 ; j < count ; j++ ){
			scanf("%d",&num);
			a[i][num-1] = 1;
		}
	}

	for( i = 0 ; i < n ; i++ ) {
		for(j = 0;j < n-1 ; j++ ) printf("%d ",a[i][j]);
		printf("%d\n",a[i][n-1]);
	}
}