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

int main() {
	int num;
	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &W[i]);
	}
	num = W[1];
	while (Count(num) != n) {
		num++;
	}
	printf("%d\n", num);


	return 0;
}
