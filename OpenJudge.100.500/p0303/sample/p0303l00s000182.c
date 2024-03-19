#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100000

int W[SIZE];	//size : n
int n, k;

int Count(int P) {
	int cnt = 0, pos = 0;
	int insP = P, add = 0;
	for (int i = 0; i < k; i++) {
		add = 0;
		while (add <= insP && pos < n) {
			add += W[pos];
			pos++;
			cnt++;
		}
		if (add > insP) {
			cnt--;
			pos--;
		}
		else if (pos == n) {
			break;
		}
	}
	return cnt;

}

int BinarySearch(int right, int left) {
	int right0 = right, left0 = left;
	int mid;
	if (Count(right0) == Count(left0))return right0;
	while (1) {
		if (left0 - right0 == 1) return left0;
		mid = (right0 + left0) / 2;
		if (Count(mid) == n) {
			left0 = mid;
		}
		else right0 = mid;
	}
}

int main() {
	int right, left = 0;
	int P;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &W[i]);
	}

	right = W[1];
	for (int i = 0; i < n; i++) {
		left += W[i];
	}

	P = BinarySearch(right, left);

	printf("%d\n", P);


	return 0;
}
