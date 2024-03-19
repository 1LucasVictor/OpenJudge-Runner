#include<stdio.h>
#include<stdlib.h>

int bubbleSort(int *a, int n);
void swapInt(int *a, int *b);

int main() {
	int n;
	int *a;
	int i,cnt;
	scanf("%d", &n);
	a = (int *)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);

	cnt = bubbleSort(a, n);

	for (i = 0; i < n; i++) {
		printf("%d", *(a + i));
		if (i != n - 1)printf(" ");
	}
	printf("\n");
	printf("%d\n",cnt);
	return 0;
}

int bubbleSort(int *a, int n) {
	int i,j;
	int swapCount = 0;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swapInt(&a[i], &a[j]);
				swapCount++;
			}
		}
	}
	return swapCount;
}

void swapInt(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}