#include<stdio.h>

int main(void){
	int n, i, min = 1000000, max = -1000000, sum = 0;
	scanf("%d", &n);
	int ai[1000000];
	for(i = 0; i < n; i++){
			scanf("%d", &ai[i]);
	}
	for(i = 0; i < n; i++){
		if(ai[i] < min){
			min = ai[i];
		}
		if(max < ai[i]){
			max = ai[i];
		}
		sum = sum + ai[i];
	}
	printf("%d %d %d\n", min, max, sum);
	return 0;
}