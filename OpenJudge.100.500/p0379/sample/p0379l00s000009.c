#include<stdio.h>
int main(void){
	int a, b, i, j, k, arr[100][100], m[100], sum = 0;
	
	scanf("%d %d\n", &a, &b);
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			if(j == b-1){
				scanf("%d\n", &arr[i][j]);
				break;
			}
			scanf("%d", &arr[i][j]);
		}
	}
	for(j = 0; j < b; j++){
		scanf("%d\n", &m[j]);
	}
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			sum += arr[i][j] * m[j];
		}
		printf("%d\n", sum);
		sum = 0;
	}
	
	return 0;
}

