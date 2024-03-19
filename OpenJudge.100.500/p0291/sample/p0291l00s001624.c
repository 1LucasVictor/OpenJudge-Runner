#include <stdio.h>
#define SIZE 200000

int main(void){
	int N, i, j, a[SIZE], sub;
	int max = -1000000000;
	int min = 1000000000;

	scanf("%d",&N);
	for(i = 0; i < N; i++){
		scanf("%d",&a[i]);
	}

	for(i = 0; i < N; i++){
		if(a[i] < min) min = a[i];
		sub = a[i] - min;
		if(sub > max) max = sub;
	}
	printf("%d\n", max);

}