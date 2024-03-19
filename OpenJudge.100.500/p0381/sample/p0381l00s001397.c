#include<stdio.h>

int main(){

	int i, j, k, n, x, way, sum;

	while(1){

		way = 0;
		
		scanf("%d %d", &n, &x);

		if((n == 0) && (x == 0)){
			break;
		}

		for(i = 1; i <= n; i++ ){
			for(j = 1; j <= n; j++){
				for(k = 1; k <= n; k++){
					sum = i + j + k;
					if((sum == x) && (i < j) && (j < k)){
						way++;
					}
				}
			}
		}

		printf("%d\n", way);

	}

		

	return 0;
}