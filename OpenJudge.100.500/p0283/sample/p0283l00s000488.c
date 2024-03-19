#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int board[8] = { -20, -20, -20, -20, -20, -20, -20, -20 };
int check[8];
int flag;
int count;

void output(int box[]) {
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (j == box[i])
				printf("Q");
			else
				printf(".");
		}
		printf("\n");
	}
}

void eight_queens(int c, int box[]) {
	if (c == 8) {
		output(box);
	}
	else if (check[c] == 1){
		eight_queens(c + 1, box);
		if (check[c + 1] == 0)
			box[c + 1] = -20;
	}
	else {
		int flag;
		for (int i = 0; i < 8; i++) {
			flag = 0;
			for (int j = 0; j < 8; j++) {
				if (i == box[j] || i == box[j] - c + j || i == box[j] + c - j)
					flag = 1;
			}
			if (flag == 0) {
				box[c] = i;
				eight_queens(c + 1, box);
			}
			if (check[c + 1] == 0)
				box[c + 1] = -20;
		}
	}
}

int main(void) {
	int n, r, c;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d%d", &r, &c);
		board[r] = c;
		check[r] = 1;
	}

	eight_queens(0, board);
		
	//printf("Fin\n");
	//while(1) {}

	return 0;
}
