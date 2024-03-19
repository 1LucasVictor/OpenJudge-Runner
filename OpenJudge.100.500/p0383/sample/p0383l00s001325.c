
#include <stdio.h>
#include <stdlib.h>

int** make2dArray(int x,int y){
	int** array = (int**)malloc(sizeof(int*) * x);
	for (int i = 0; i < x; i++) {
		array[i] = (int*)malloc(sizeof(int) * y);
	}
	return array;
}
void printArray(int* a, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", a[i]);
	}
}
void print2dIntArray(int** a,int x,int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (j == y - 1) {
				printf("%d\n", a[i][j]);
			}
			else {
				printf("%d ", a[i][j]);
			}
		}
	}
}
void print2dLongArray(long long** a, int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			if (j == y - 1) {
				printf("%llu\n", a[i][j]);
			}
			else {
				printf("%llu ", a[i][j]);
			}
		}
	}
}
int* getColFromArray(int** array, int x, int j) {
	int* a = (int*)malloc(sizeof(int) * x);
	for (int i = 0; i < x; i++) {
		a[i] = array[i][j];
	}
	return a;
}
long long int arrayTimes(int* a1, int* a2, int length) {
	long long int res = 0;
	for (int i = 0; i < length; i++) {
		res = res + a1[i] * a2[i];
	}
	return res;
}
int main() {
	int n, m, l;
	scanf("%d%d%d", &n, &m, &l);
	int** a = make2dArray(n, m);
	int** b = make2dArray(m, l);
	unsigned long long int** c = (unsigned long long int**)malloc(sizeof(unsigned long long int*) * n);
	for (int i = 0; i < n; i++) {
		c[i] = (unsigned long long int*)malloc(sizeof(unsigned long long int) * l);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			int* bCol = getColFromArray(b, m, j);
			c[i][j] = arrayTimes(a[i], bCol, m);
		}
	}
	print2dLongArray(c, n, l);
}


