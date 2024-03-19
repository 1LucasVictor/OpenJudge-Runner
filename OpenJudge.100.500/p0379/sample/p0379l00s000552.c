#include <stdio.h>

int main(void)
{
	int matrixa[100][100];
	int matrixaX, matrixaY;
	int matrixb[100];
	int matrixans[100];
	
	scanf("%d %d", &matrixaX, &matrixaY);
	
	for(int i = 0; i < matrixaX; i++){
		matrixans[i] = 0;
	}
	
	for(int i = 0; i < matrixaX; i++){
		for(int j = 0; j < matrixaY; j++){
			scanf("%d", &matrixa[i][j]);
		}
	}
	

	
	
	for(int i = 0; i < matrixaY; i++){
		scanf("%d", &matrixb[i]);
	}
	
	/*	
	for(int i = 0; i < matrixaX; i++){
		for(int j = 0; j < matrixaY; j++){
			printf("%d", matrixa[j][i]);
		}
		putchar('\n');
	}
	
	
	for(int i = 0; i < matrixaY; i++){
		printf("%d", matrixb[i]);
	}
	*/
	for(int i = 0; i < matrixaX; i++){
		
		for(int multiply = 0; multiply < matrixaY; multiply++){
			matrixans[i] += matrixa[i][multiply] * matrixb[multiply];
			//printf("%d ", matrixans[i]);
		}
	//	putchar('\n');
	}
	
	for(int i = 0; i < matrixaX; i++){
		printf("%d\n", matrixans[i]);
	}
	
	return 0;
}
