#include <stdio.h>

#define N 8
#define FREE 0
#define N_FREE -1

int row[N];
int col[N];
int dpos[N * 2];
int dneg[N * 2];
int in[N];

void put(int);

int main() {
	int i, j, r, c;
	for (i = 0; i < N; i++) in[i] = N_FREE;
	scanf("%d", &j);
	for (i = 0; i < j; i++) {
		scanf("%d %d", &r, &c);
		/*row[r] = c;
		col[c] = N_FREE;
		dpos[r + c] = N_FREE;
		dneg[r - c + N - 1] = N_FREE;*/
		in[r] = c;
	}
	put(0);
	/*for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (row[i] == j) printf("Q");
			else printf(".");
		}
		printf("\n");
	}*/
	return 0;
}

void put(int i) {
	int j,a,b,flag;
	static int count = 0;
	//sprintf("DEBUG:%d i=%d\n", count++,i);
	if (i == N) {
		//PRINT
		flag = 0;
		for (j = 0; j < N; j++) {
			if (in[j] != row[j] && in[j]!=-1) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			for (a = 0; a < N; a++) {
				for (b = 0; b < N; b++) {
					if (row[a] == b) printf("Q");
					else printf(".");
				}
				printf("\n");
			}
		}
		//printf("DEBUG OK\n");
		return;
	}
	for (j = 0; j < N; j++) {
		if (col[j] == N_FREE ||
			dpos[i + j] == N_FREE ||
			dneg[i - j + N - 1] == N_FREE) {

		}else {
				row[i] = j;
				col[j] = dpos[i + j] = dneg[i - j + N - 1] = N_FREE;
				put(i + 1);
				col[j] = dpos[i + j] = dneg[i - j + N - 1] = FREE;
		}
	}
}
