#include <stdio.h>
#include <string.h>

#define MAX 100000

int w[MAX] = {0};
int G[MAX] = {0};


void inSertSort(int A[], int n, int g) {
	int i, j, v;
	
	for (i = g ; i < n; ++i) {
		v = A[i];
		j = i - g;
		while (j >= 0 && A[j] > v) {
			A[j + g] = A[j];
			j = j - g;
//			cnt++;
		}
		A[j + g] = v;
	}
	return;
}

void shellSort(int A[] , int n) {
	int i;
	int m;
	G[0] = 1;
	for (i = 0; (3 * G[i] + 1) < n  ; ++i) {
		G[i + 1] = 3 * G[i] + 1;
		++m;
	}

	for (i = m - 1 ; i >= 0; --i) {
		inSertSort(A, n, G[i]);
	}
	
	return;
}

void showM(int A[], int n) {
	int i;
	for (i = 0; i < n; ++i) {
		printf("%d ", A[i]);
	}
	putchar('\n');
	return;
}

int searchMIN(int A[], int n) {
	int i, min = 10001;
	int min_i = 0;
	
	for (i = 0; i < n; ++i) {
		if (min > A[i]) {
			min = A[i];
			min_i = i;
		}
	}
	return min_i;
}

int searchMAX(int A[], int n) {
	int i, max = 0;
	int max_i = 0;
	
	for (i = 0; i < n; ++i) {
		if (max < A[i]) {
			max = A[i];
			max_i = i;
		}
	}
	return max_i;
}

int main(void) {
	int n, k, i, j, max;
	scanf("%d %d", &n, &k);

	for (i = 0; i < n; ++i) {
		scanf("%d", &w[i]);
	}
	shellSort(w, n);
//	showM(w, n);
	memset(G, 0, sizeof(G));
	for (i = n; i >= 0; --i) {
//		showM(G, k);
		G[searchMIN(G, k)] += w[i];
	}
//	showM(G, k);
  	printf("%d\n", G[searchMAX(G, k)]);
	
	return 0;
}