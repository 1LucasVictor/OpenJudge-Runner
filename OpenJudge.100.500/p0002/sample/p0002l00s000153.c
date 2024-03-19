#include <stdio.h>

int main(void)
{
	int a, n, i, j, x[3][1000], max, y[2], result[1000];
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%d %d %d", &x[0][i], &x[1][i], &x[2][i]);
	}
	
	for (i = 0; i < n; i++){
		max = 0;
		for (j = 0; j < 3; j++){
			if (x[j][i] >= max){
				max = x[j][i];
			}
		}
		
		j = 0;
		a = 0;
		while (j < 3){
			if (x[j][i] != max){
				y[a] = (x[j][i]) * (x[j][i]);
				a++;
			}
			j++;
		}
		
		if (y[0] + y[1] == max * max){
			result[i] = 1;
		}
	}
	
	for (i = 0; i < n; i++){
		if (result[i] == 1){
			printf("YES ");
		}
		else {
			printf("NO ");
		}
	}
	
	return (0);
}