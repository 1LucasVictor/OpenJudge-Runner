#include <stdio.h>
#include <stdlib.h>

#define CheckNumber(number, limitLow, limitHigh) (	\
		(number) >= limitLow		&&				\
		(number) <= limitHigh						\
)

typedef struct {
	long** matrix;
	int rowSize;
	int columnSize;
} Matrix;

void InputNumber1(long* number, int limitLow, int limitHigh);
void InputNumber3(int* number1, int* number2, int* number3, int limitLow, int limitHigh);

void GetMatrix(Matrix* matrix, const int rowSize, const int columnSize);
void MulMatrix(Matrix* newMatrix, Matrix* a, Matrix* b);

void FreeMatrix(Matrix* matrix);

int main(void) {
	int rowSize;
	int commonSize;
	int columnSize;

	Matrix a;
	Matrix b;
	Matrix res;

	int idr;
	int idc;

	InputNumber3(&rowSize, &commonSize, &columnSize, 1, 100);
	GetMatrix(&a, rowSize, commonSize);
	GetMatrix(&b, commonSize, columnSize);

	for (idr = 0; idr < a.rowSize; idr++) {
		for (idc = 0; idc < a.columnSize; idc++) {
			InputNumber1((*(a.matrix + idr) + idc), 0, 10000);
		}
	}

	for (idr = 0; idr < b.rowSize; idr++) {
		for (idc = 0; idc < b.columnSize; idc++) {
			InputNumber1((*(b.matrix + idr) + idc), 0, 10000);
		}
	}

	MulMatrix(&res, &a, &b);

	for (idr = 0; idr < res.rowSize; idr++) {
		for (idc = 0; idc < res.columnSize - 1; idc++) {
			printf("%ld ", *(*(res.matrix + idr) + idc));
		}
		printf("%ld\n", *(*(res.matrix + idr)+ idc));
	}

	FreeMatrix(&a);
	FreeMatrix(&b);
	FreeMatrix(&res);

	return 0;
}

void InputNumber1(long* number, int limitLow, int limitHigh) {
	long tmp1;
	do {
		scanf("%ld", &tmp1);
	} while(!CheckNumber(tmp1, limitLow, limitHigh));
	*number = tmp1;
}

void InputNumber3(int* number1, int* number2, int* number3, int limitLow, int limitHigh) {
	int tmp1;
	int tmp2;
	int tmp3;
	do {
		scanf("%d %d %d", &tmp1, &tmp2, &tmp3);
	} while(
			!CheckNumber(tmp1, limitLow, limitHigh) ||
			!CheckNumber(tmp2, limitLow, limitHigh) ||
			!CheckNumber(tmp3, limitLow, limitHigh)
			);
	*number1 = tmp1;
	*number2 = tmp2;
	*number3 = tmp3;
}

void GetMatrix(Matrix* matrix, const int rowSize, const int columnSize) {
	int idx;
	long** arr = (long**)malloc(sizeof(long*) * rowSize);
	for (idx = 0; idx < rowSize; idx++) {
		*(arr + idx) = (long*)malloc(sizeof(long) * columnSize);
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
			long sum = 0;

			for (idrp = 0; idrp < repeat; idrp++) {
				long aVal = *(*(a->matrix + idr) + idrp);
				long bVal = *(*(b->matrix + idrp) + idc);
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
