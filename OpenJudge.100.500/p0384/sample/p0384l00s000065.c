
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
void call(int n) {
	for (int i = 1; i <= n; i++) {
		int x = i;
		if (x % 3 == 0) {
			printf(" %d", i);
			continue;
		}
		do{
			if (x % 10 == 3) {
				printf(" %d", i);
				break;
			}
			x /= 10;
		} while (x);
	}
}
char change(char ch) {
	if (ch >= 'a' && ch <= 'z') {
		ch = ch - 'a' + 'A';
	}
	else if (ch >= 'A' && ch <= 'Z') {
		ch = ch - 'A' + 'a';
	}
	return ch;
}
int main() {
	char str[1200];
	fgets(str, 1200, stdin);
	for (int i = 0; str[i] != '\0'; i++) {
		printf("%c", change(str[i]));
	}
}


