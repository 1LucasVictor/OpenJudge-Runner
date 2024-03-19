#include<stdio.h>

int main(){
	int N = 0;
	int i = 0, j = 0;
	int max = 0;
	int R[200000];
	scanf("%d", &N);
	for( i = 0; i < N; i++ ){
		scanf("%d", &R[i]);
	}
	for( i = 0; i < N; i++ ){
		for( j = i+1; j < N; j++ ){
			max = (max>R[j]-R[i]?max:R[j]-R[i]);
		}
	}
	printf("%d\n", max);
	return 0;
}