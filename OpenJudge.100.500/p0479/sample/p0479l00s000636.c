#include<stdio.h>
#include<stdlib.h>
int main(void){
	int n;
	int *a;
	scanf("%d", &n);
	a = (int *)malloc(sizeof(int) * n);
	for(int i=0; i<n; i++){
		a[i] = 0;
	}
	for(int j=0; j<n-1; j++){
		int _a;
		scanf("%d", &_a);
		a[_a-1]++;
	}
	for(int k=0; k<n; k++){
		printf("%d\n", a[k]);
	}
	return 0;
}