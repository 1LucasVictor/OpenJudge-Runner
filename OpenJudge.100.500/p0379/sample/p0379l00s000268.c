#include <stdio.h>
#include <stdlib.h>

#define CheckNumber(number, limitLow, limitHigh) (	\
		(number) >= limitLow		&&				\
		(number) <= limitHigh						\
)

typedef struct {
	int** matrix;
	int rowSize;
	int columnSize;
} Matrix;

void InputNumber1(int* number, int limitLow, int limitHigh);
void InputNumber2(int* number1, int* number2, int limitLow, int limitHigh);

void GetMatrix(Matrix* matrix, const int rowSize, const int columnSize);
void MulMatrix(Matrix* newMatrix, Matrix* a, Matrix* b);

void FreeMatrix(Matrix* matrix);

int main(void) {
	int rowSize;
	int columnSize;

	Matrix a;
	Matrix b;
	Matrix res;

	int idr;
	int idc;

	InputNumber2(&rowSize, &columnSize, 1, 100);
	GetMatrix(&a, rowSize, columnSize);
	for (idr = 0; idr < a.rowSize; idr++) {
		for (idc = 0; idc < a.columnSize; idc++) {
			InputNumber1((*(a.matrix + idr) + idc), 0, 1000);
		}
	}

	GetMatrix(&b, columnSize, 1);
	for (idr = 0; idr < b.rowSize; idr++) {
		for (idc = 0; idc < b.columnSize; idc++) {
			InputNumber1((*(b.matrix + idr) + idc), 0, 1000);
		}
	}

	MulMatrix(&res, &a, &b);

	for (idr = 0; idr < res.rowSize; idr++) {
		for (idc = 0; idc < res.columnSize - 1; idc++) {
			printf("%d ", *(*(res.matrix + idr) + idc));
		}
		printf("%d\n", *(*(res.matrix + idr)+ idc));
	}

	FreeMatrix(&a);
	FreeMatrix(&b);
	FreeMatrix(&res);

	return 0;
}

void InputNumber1(int* number, int limitLow, int limitHigh) {
	int tmp1;
	do {
		scanf("%d", &tmp1);
	} while(!CheckNumber(tmp1, limitLow, limitHigh));
	*number = tmp1;
}

void InputNumber2(int* number1, int* number2, int limitLow, int limitHigh) {
	int tmp1;
	int tmp2;
	do {
		scanf("%d %d", &tmp1, &tmp2);
	} while(
			!CheckNumber(tmp1, limitLow, limitHigh) ||
			!CheckNumber(tmp2, limitLow, limitHigh)
			);
	*number1 = tmp1;
	*number2 = tmp2;
}

void GetMatrix(Matrix* matrix, const int rowSize, const int columnSize) {
	int idx;
	int** arr = (int**)malloc(sizeof(int*) * rowSize);
	for (idx = 0; idx < rowSize; idx++) {
		*(arr + idx) = (int*)malloc(sizeof(int) * columnSize);
	}
	matrix->matrix = arr;
	matrix->rowSize = rowSize;
	matrix->columnSize = columnSize;
}

void MulMatrix(Matrix* newMatrix, Matrix* a, Matrix* b) {
	const int newRowSize = a->rowSize;
	const int newColumnSize = b->columnSize;

	const int repeat = (a->columnSize == b->rowSize) * a->columnSize;

	int idr;
	int idc;
	int idrp;

	GetMatrix(newMatrix, newRowSize, newColumnSize);
	for (idr = 0; idr < newRowSize; idr++) {
		for (idc = 0; idc < newColumnSize; idc++) {
			int sum = 0;

			for (idrp = 0; idrp < repeat; idrp++) {
				int aVal = *(*(a->matrix + idr) + idrp);
				int bVal = *(*(b->matrix + idrp) + idc);
				sum += aVal * bVal;
			}
			*(*(newMatrix->matrix + idr) + idc) = sum;
		}
	}
}

void FreeMatrix(Matrix* matrix) {
	int rowSize = matrix->rowSize;

	int idr;

	for (idr = 0; idr < rowSize; idr++) {
		free(*(matrix->matrix + idr));
	}
	free(matrix->matrix);
}
