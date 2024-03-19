#include<stdio.h>
int Hira[101][101];
int Sawa[101];
/*
行列の意味
1から2に行きたいときは1行目の２列目を見れば良い
*/
void tree(int m) {
	int i, j, k = 1, Ryo[100], kom, min, kei = 0;
	Ryo[0] = 0;
	Sawa[0] = 1;
	for (i = 1; i < m; i++) {
		Sawa[i] = 0;
	}
	for (;;) {
		kom = 9999;
		for (i = 0; i < k; i++) {
			for (j = 0; j < m; j++) {
				if (Hira[Ryo[i]][j] < kom && Hira[Ryo[i]][j] != -1 && Sawa[j] != 1) {
					kom = Hira[Ryo[i]][j]; min = j;
				}
			}
		}
		if (k != m) {
			Ryo[k] = min;
			Sawa[min] = 1;
			kei += kom;
			k++;
		}
		else break;
	}
	printf("%d\n", kei);
}

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &Hira[i][j]);
		}
	}
	tree(n);
	return 0;
}
