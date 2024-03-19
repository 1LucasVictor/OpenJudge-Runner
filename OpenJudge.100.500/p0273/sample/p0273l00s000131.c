#include <stdio.h>
#include <stdlib.h>

#define N 1000
/*void makeFibnacci(int *,int);

void makeFibnacci(int *a,int n){
	int i;
	
}*/

int main(){
	int n,i;
	int a[N];

	scanf("%d",&n);

	//a = (int *)malloc(n+1);

	//makeFibnacci(a,n+1);

	a[0] = 1;
	a[1] = 1;
	for( i = 2 ; i <= n ; i++ ) a[i] = a[i-2] + a[i-1];


	printf("%d\n",a[n]);

	//free(a);
	return 0;
}