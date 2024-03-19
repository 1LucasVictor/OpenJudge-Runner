#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<stdlib.h>
int main() {
	int n, i;
	int *array;
	scanf("%d", &n);
	array = (int *)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++)
		scanf("%d", &array[i]);
	for (i=n-1;i!=0;--i)
	printf("%d ", array[i]);
	printf("%d\n",array[0]);
	free(array);
	return 0;
}