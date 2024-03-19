#include <stdio.h>

int main(void){
	int n,i,j;
	int v[100];
	scanf("%d", &n);
	for (i=0; i<n; i++){
		scanf("%d", &v[i]);
	}
	for (j=0; j<n-1; j++){
		printf("%d ", v[n-1-j]);
	}
	for (j=n-1; j<n; j++){
		printf("%d", v[n-1-j]);
	}
	putchar('\n');
	return 0;
}