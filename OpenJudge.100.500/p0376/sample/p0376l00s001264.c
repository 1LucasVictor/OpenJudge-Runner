#include<stdio.h>

int main(void){
	int n, A[100];
	int i;
	scanf("%d", &n);
	for(i=0; i<n; i++) scanf("%d", &A[i]);
	for(i=n-1; 0<i; i--) printf("%d ", A[i]);
	printf("%d\n", A[0]);
	return 0;
}
