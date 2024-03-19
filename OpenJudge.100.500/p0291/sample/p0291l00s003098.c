#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i,j,price,max;
	int *r;
	scanf("%d",&n);
	r = malloc(sizeof(int) * (n));
	for(i=0; i<n; i++){
		scanf("%d",(r+i));
	}
	max = (*(r+1)) - (*(r));
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			price = *(r+j)-*(r+i);
			if(price > max)max = price;
		}
	}
	printf("%d\n",max);
	free(r);
	return 0;
}
		