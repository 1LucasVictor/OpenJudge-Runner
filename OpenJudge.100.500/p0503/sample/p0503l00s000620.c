#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b){return *(int*)a-*(int*)b;}

int main(void){
	int n, i;
	int a[200000];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", a+i);
	}
	qsort(a, n, sizeof(int), comp);
	for(i=1; i<n; i++){
		if(a[i]==a[i-1]) break;
	}
	puts(i==n?"YES":"NO");
}
