
#include<stdio.h>

int main(){
	int max, i, j, k, div, count, rest;
	int n[100];
	int x[100];

	i =0;

	while (1){
		scanf("%d %d", &n[i], &x[i]);
		if(n[i] == 0 && x[i] == 0){
			break;
		}
		i++;
	}

	i = 0;
	count = 0;

	while (1){
		if(n[i] == 0 && x[i] == 0){
			break;
		}
		max = x[i] - 3;
		if (max > n[i]){
			max = n[i];
		}
		for (j = max; j > 2; j--){
			if(j > x[i]/3){
				rest = x[i] - j;
				for(k = 1; k < (float)rest/2; k++){
					if(rest - k < j){
						count++;
					}
				}
			}
		}
		printf("%d\n", count);
		count = 0;
		i++;
	}

	return 0;
}

