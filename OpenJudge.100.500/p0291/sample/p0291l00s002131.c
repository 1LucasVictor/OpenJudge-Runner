#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, j, n, max=0, temp;
	int *r;
	scanf("%d", &n);
	r = malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d", &r[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=1;j<n;j++){
			temp=r[j]-r[i];
			if(max<temp){
				max=temp;
			}
		}
	}
	printf("%d\n", max);
}