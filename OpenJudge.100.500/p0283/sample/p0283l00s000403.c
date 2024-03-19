//
//  main.c
//  A
//
//  Created by s1262004 on 2019/07/26.
//  Copyright Â© 2019 s1262004. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int N = 8;

int col[8];
int row[8];
int dpos[16];
int dneg[16];

int coord[8][8];

void printBoard();

int putQueen(int);
int isSafe(int, int);


int main(int argc, const char* argv[]) {
	int i, j;
	int n;

	for (i = 0; i < N; i++) {
		row[i] = col[i] = 0;
		for (j = 0; j < N; j++) coord[i][j] = dpos[i + j] = dneg[i - j + N - 1] = 0;
	}


	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		int tempRow, tempCol;

		scanf("%d %d", &tempRow, &tempCol);

		coord[tempRow][tempCol] = 1;

		row[tempRow] = col[tempCol] = 1;
		dpos[tempRow + tempCol] = dneg[tempRow - tempCol + N - 1] = 1;
	}

	if (!putQueen(0)) printf("No solution\n");
	return 0;
}

void printBoard() {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			(coord[i][j]) ? printf("Q") : printf(".");
		}
		printf("\n");
	}
}

int putQueen(int i) {
	if (i >= N) {
		printBoard();
		return 1;
	}
	if (row[i]) { //already placed
		if (putQueen(i + 1)) return 1;
	}

	int j;
	for (j = 0; j < N; j++) {
		if (!isSafe(i, j)) continue;
		
		coord[i][j] = 1;
		row[i] = col[j] = dpos[i + j] = dneg[i - j + N - 1] = 1;

		if (putQueen(i + 1)) return 1;
		coord[i][j] = 0;
		row[i] = col[j] = dpos[i + j] = dneg[i - j + N - 1] = 0;
	}
	return 0;
}

int isSafe(int r, int c) {
	if (row[r] || col[c]) {
		return 0;
	}
	if (dpos[r + c]) {
		return 0;
	}
	if (dneg[r - c + N - 1]) {
		return 0;
	}
	return 1;
}

