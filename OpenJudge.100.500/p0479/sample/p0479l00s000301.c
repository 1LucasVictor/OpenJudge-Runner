#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	int n, x;
	scanf("%d", &n);
	int vet[n];
	for(int i=0; i<n; ++i)
		vet[i]=0;

	for(int i=0; i<(n-1); ++i){
		scanf("%d", &x);
		++vet[x];
	}
	vet[n]=0;
	for(int i=1; i<=n; ++i)
		printf("%d\n", vet[i]);


    return 0;
	
}
