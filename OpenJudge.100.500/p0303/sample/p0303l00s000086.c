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


int main(void) {
	int n, k, i, j, max;
	scanf("%d %d", &n, &k);

	for (i = 0; i < n; ++i) {
		scanf("%d", &w[i]);
	}
	shellSort(w, n);
//	showM(w, n);
	memset(G, 0, sizeof(G));
	for (i = n; i > 0; --i) {
		for (j = 0; j < k; ++j) {
			if (G[j] == G[(j + 1) % k]) {
				G[j] += w[i];
				break;
			} else if (G[j] > G[(j + 1) % k] && G[(j + 2) % k] > G[(j + 1) % k]) {
				G[(j + 1) % k] += w[i];
				break;
			}
		}
	}
//	showM(G, k);
	max = (G[j] > G[(j+1) % k]) ? G[j] : G[(j+1) % k];
	printf("%d\n", max);
	
	return 0;
}