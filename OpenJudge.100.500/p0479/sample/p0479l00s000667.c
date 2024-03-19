#include<stdio.h>

#define S 120000

int main(){
	int i,N,j;
	int a[S];
	int n[S] = {0};
	scanf("%d",&N);
	
	for(i = 2; i < N + 1; i++){
		scanf("%d",&a[i]);
	}
	for(j = 1;j < N + 1; j++){
		for(i = 2; i < N + 1; i++){
			if( j== a[i]){
				n[j] += 1;
			}}
			printf("%d\n",n[j]);
	}
}