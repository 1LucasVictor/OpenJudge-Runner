#include <stdio.h>
#include <string.h>

void readInt(int *x) {
	scanf("%d", x);
	return;
}
void readInts(int n, int arr[]) {
	int i;
	for (i=0;i<n;i++) {
		readInt(&arr[i]);
	}
}
void readChar(char *x) {
	scanf("%c", x);
	return;
}
void readChars(char x[]) {
	scanf("%s", x);
	return;
}
void printInts(int n, int *arr) {
	int i;
	for (i=0;i<n;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	return;
}
void swap(int *x, int *y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
	return;
}
void quicksort(int x[], int left, int right) {
	int i,j;
	int pivot;

	i = left;
	j = right;

	pivot = x[(left+right)/2];
	while (1) {
		while (x[i] < pivot) i++;
		while (pivot < x[j]) j--;
		if (i>=j) break;
		swap(&x[i],&x[j]);
		i++;
		j--;
	}
	if (left < i-1) quicksort(x, left, i-1);
	if (j+1 < right) quicksort(x, j+1, right);
}

int main(int argc, char const *argv[])
{
	int n;
	readInt(&n);
	int a[256];
	readInts(n,a);
	quicksort(a,0,n-1);
	int i;
	int flg = 1;
	for (i=0;i<n-1;i++) {
		if (a[i]==a[i+1]) flg = 0;break;
	}
	if (flg) {
		printf("YES\n");
	}else{
		printf("NO\n");
	}

	return 0;
}