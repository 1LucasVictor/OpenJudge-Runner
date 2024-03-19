#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main() {
	int n = 0;
	int a = 0,b=0,c=0;
	int arr[100][100] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		scanf("%d", &b);
		for (int j = 0; j < b; j++) {
			scanf("%d", &c);
			arr[a - 1][c - 1] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
