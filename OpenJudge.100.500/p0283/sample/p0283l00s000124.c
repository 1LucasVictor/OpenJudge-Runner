#include <stdio.h>
#define N 8
#define FREE -1
#define NOT_FREE 1

int row[N], col[N], dpos[15], dneg[15];

void printBoard() {
	int i,j;
	for (i = 0;i < N;i++) {
		for (j = 0;j < N;j++) {
			if(row[i] == j) printf("Q");
			else printf(".");
		}
		printf("\n");
	}
}

void putQueen(int i) {
	int j;
	if(i == N) {
		printBoard();
		return;
	}

	if(row[i] != FREE) putQueen(i+1);
	else {
		for(j = 0; j < N; j++) {
			if(col[j] == NOT_FREE || dpos[i+j] == NOT_FREE || dneg[i-j+N-1] == NOT_FREE) continue;
			row[i] = j;
			col[j] = dpos[i+j] = dneg[i-j+N-1] = NOT_FREE;
			putQueen(i+1);
			col[j] = dpos[i+j] = dneg[i-j+N-1] = FREE;
			row[i] = FREE;
		}
	}
}

int main() {
	int i, j;
	int k,r,c;

	for(i = 0; i < N; i++) {
		row[i] = col[i] = FREE;
	}
	for(i = 0; i < 15; i++) {
		dpos[i] = dneg[i] = FREE;
	}

	scanf("%d", &k);
	for(i = 0; i < k; i++) {
		scanf("%d", &r);
		scanf("%d", &c);
		row[r] = col[c] = dpos[r+c] = dneg[r-c+N-1] = NOT_FREE;
		row[r] = c;
	}
	putQueen(0);

	return 0;
}