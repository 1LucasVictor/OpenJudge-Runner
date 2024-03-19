#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int *a;
	int i;
	
	scanf("%d", &n);
	
	a=(int *)malloc(sizeof(int)*n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	for(i =0; i<n; i++){
		if(a[i]%2==0){
			if(a[i]%3!=0 && a[i]%5!=0){
				printf("DENIED");
				free(a);
				return(-1);
			}
		}
	}
	printf("APPROVED");
	
	free(a);
	
	return 0;
}