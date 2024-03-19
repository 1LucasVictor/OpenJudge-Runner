#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100000

int main() {
	int pos, wi, flag = 0;
	int n, k, P = 0;
	int W[SIZE];	//size : n
	int T[SIZE];	//size : k
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &W[i]);
	}
	for (int i = 0; i < n; i++) {
		if (P > W[i]) P = W[i];
	}
	while (1) {
		for (int j = 0; j < k; j++) {
			T[j] = P;
		}
		pos = 0; wi = 0;
		while (pos < k&&wi < n) {
			if (T[pos] >= W[wi]) {
				T[pos] -= W[wi];
				wi++;
			}
			else {
				pos++;
			}

			if (pos == k) {
				P++;
			}
			else if (wi == n) {
				flag = 1;
				printf("%d\n", P);
			}
		}
		if (flag == 1)break;
	}
	return 0;
}
