#include <stdio.h>
#include <stdlib.h>


// チェス盤面の配列
int BOARD[8][8];


// クイーンの動ける範囲にフラグを立てる（フラグのある場所にクイーンは置けない）
void Put(int gyou, int retu, int bango){
	int i, j;

	for(i = 0; i < 8; i++)	// 横
		if(BOARD[gyou][i] == -1)
			BOARD[gyou][i] = bango;

	for(i = 0; i < 8; i++)	// 縦
		if(BOARD[i][retu] == -1)
			BOARD[i][retu] = bango;

	// 左斜め
	i = gyou; j = retu;
	while(i > 0 && j > 0){
		i--; j--;
	}
//printf("i:%d j:%d\n", i, j);
	while(i < 8 && j < 8){
		if(BOARD[i][j] == -1)
			BOARD[i][j] = bango;
		i++;	j++;
	}

	// 右斜め
	i = gyou; j = retu;
	while(i > 0 && j < 7){
		i--; j++;
	}
//printf("i:%d j:%d\n", i, j);
	while(i < 8 && j >= 0){
		if(BOARD[i][j] == -1)
			BOARD[i][j] = bango;
		i++;	j--;
	}
}




void Remove(int gyou, int retu, int bango){
	int i, j;

	for(i = 0; i < 8; i++)	// 横
		if(BOARD[gyou][i] == bango)
			BOARD[gyou][i] = -1;

	for(i = 0; i < 8; i++)	// 縦
		if(BOARD[i][retu] == bango)
			BOARD[i][retu] = -1;

	// 左斜め
	i = gyou; j = retu;
	while(i > 0 && j > 0){
		i--; j--;
	}
//printf("i:%d j:%d\n", i, j);
	while(i < 8 && j < 8){
		if(BOARD[i][j] == bango)
			BOARD[i][j] = -1;
		i++;	j++;
	}

	// 右斜め
	i = gyou; j = retu;
	while(i > 0 && j < 7){
		i--; j++;
	}
//rintf("i:%d j:%d\n", i, j);
	while(i < 8 && j >= 0){
		if(BOARD[i][j] == bango)
			BOARD[i][j] = -1;
		i++;	j--;
	}

	BOARD[gyou][retu] = -1;
}


void Disp_board()
{
	int i, j;

	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			if(BOARD[i][j] == 9)
				printf("Q");
			else
				printf(".");
		}
		printf("\n");
	}
}


int Queen_puzzle(int gyou, int retu, int bango)
{
	int i, j;

	for(i = 0; i < 8; i++){
		for(j = 0; j < 8; j++){
			if(BOARD[i][j] == -1){
				Put(i, j, bango);
				BOARD[i][j] = 9;
				if(bango == 8)
					return 1;
				if(Queen_puzzle(0, 0, bango + 1))
					return 1;
				else
					Remove(i, j, bango);
			}
		}
	}

	return 0;
}


int main()
{
	int n;
	int gyou, retu;
	int i, j, k;

	for(i = 0; i < 8; i++)
		for(j = 0; j < 8; j++)
			BOARD[i][j] = -1;

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d %d", &gyou, &retu);
		Put(gyou, retu, i + 1);
		BOARD[gyou][retu] = 9;
	}

	Queen_puzzle(0, 0, i + 1);

	Disp_board();

	return 0;
}
