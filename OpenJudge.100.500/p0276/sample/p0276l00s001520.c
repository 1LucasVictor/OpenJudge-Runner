#include <stdio.h>

int main(){
	int n;
	int index, count, v_index;
	int **matrix;
	int i,j;
	
	scanf("%d", &n);
	matrix = (int **)malloc(sizeof(int *) * n);
	for(i = 0; i < n; i++){
		matrix[i] = (int *)malloc(sizeof(int) * n);
		for(j = 0; j < n; j++){
			matrix[i][j] = 0;
		}
	}
	
	for(i = 0; i < n; i++){
		scanf("%d%d", &index, &count);
		for(j = 0; j < count; j++){
			scanf("%d", &v_index);
			matrix[index - 1][v_index - 1] = 1;
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%-2d", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
} 