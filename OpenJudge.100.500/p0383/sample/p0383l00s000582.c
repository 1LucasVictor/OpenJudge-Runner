#include<stdio.h>
#define MATRIX_MAX 101
int main(){
	int A[MATRIX_MAX][MATRIX_MAX];
	int B[MATRIX_MAX][MATRIX_MAX];
	long C[MATRIX_MAX][MATRIX_MAX];
	int row;
	int share;
	int col;
	int i, j, k;
	
	for(i = 0;i < MATRIX_MAX;i++){
		for(j = 0;j < MATRIX_MAX;j++){
			A[i][j] = 0;
			B[i][j] = 0;
			C[i][j] = 0;
		}
	}
	
	scanf("%d %d %d", &row, &share, &col);
	
	for(i = 0;i < row;i++){
		for(j = 0;j < share;j++){
			scanf("%d", &A[i][j]);
		}
	}
	
	for(i = 0;i < share;i++){
		for(j = 0;j < col;j++){
			scanf("%d", &B[i][j]);
		}
	}
	

	for(i = 0;i < row;i++){
		for(j = 0;j < col;j++){
			for(k = 0;k < MATRIX_MAX;k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
	for(i = 0;i < row;i++){
		for(j = 0;j < col - 1;j++){
			printf("%d ", C[i][j]);
		}
		printf("%d\n", C[i][col - 1]);
	}
	
	return 0;
}


