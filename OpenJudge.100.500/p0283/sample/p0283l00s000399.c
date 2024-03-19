#include<stdio.h>
#include<stdlib.h>
#define N_QUEEN 8
#define TRUE 1
#define FALSE 0
// プロトタイプ宣言
void vdNQueen(char ppchBoard[N_QUEEN][N_QUEEN], int iRow);
int iCheckRow(char ppchBoard[N_QUEEN][N_QUEEN], int iRow);
int iCheckCol(char ppchBoard[N_QUEEN][N_QUEEN], int iCol);
int iCheckCross(char ppchBoard[N_QUEEN][N_QUEEN], int iRow, int iCol);
void vdCopyBoard(char ppchBoardCopy[N_QUEEN][N_QUEEN], char ppchBoard[N_QUEEN][N_QUEEN]);
void vdPrintBoard(char ppchBoard[N_QUEEN][N_QUEEN]);
int main(void)
{
	char ppchBoard[N_QUEEN][N_QUEEN];
	int iCnt1;
	int iCnt2;
	int iInputN;
	int iInputR;
	int iInputC;
	// 盤面初期化
	for (iCnt1 = 0; iCnt1 < N_QUEEN; iCnt1++)
	{
		for (iCnt2 = 0; iCnt2 < N_QUEEN; iCnt2++)
		{
			ppchBoard[iCnt1][iCnt2] = '.';
		}
	}
	// 入力受け取り盤面に反映
	scanf("%d", &iInputN);
	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
	{
		scanf("%d %d", &iInputR, &iInputC);
		ppchBoard[iInputR][iInputC] = 'Q';
	}

	// 盤面に受け取った入力反映
	vdNQueen(ppchBoard, 0);
	return 0;
}
// Nクイーンを解く再帰関数
void vdNQueen(char ppchBoard[N_QUEEN][N_QUEEN], int iRow)
{
	int iCol;
	char ppchBoardCopy[N_QUEEN][N_QUEEN];

	// 終了条件
	if (iRow >= N_QUEEN)
	{
		vdPrintBoard(ppchBoard);
		return;
	}

	// 指定行にクイーンが配置されている->入力ですでに配置された場合はスキップ
	if (iCheckRow(ppchBoard, iRow) == FALSE)
	{
		vdNQueen(ppchBoard, iRow + 1);
	}
	else
	{
		// iRow行のクイーン位置を探索
		for (iCol = 0; iCol < N_QUEEN; iCol++)
		{
			if ((iCheckCol(ppchBoard, iCol) == TRUE) &&
				(iCheckCross(ppchBoard, iRow, iCol) == TRUE))
			{
				// 盤面コピー
				vdCopyBoard(ppchBoardCopy, ppchBoard);
				ppchBoardCopy[iRow][iCol] = 'Q';
				// 再帰
				vdNQueen(ppchBoardCopy, iRow + 1);
			}
		}
	}
	return;
}
// 指定行方向にクイーンがあるかをチェック
int iCheckRow(char ppchBoard[N_QUEEN][N_QUEEN], int iRow)
{
	int iCnt;
	int iRetValue;
	iRetValue = TRUE;
	for (iCnt = 0; iCnt < N_QUEEN; iCnt++)
	{
		if (ppchBoard[iRow][iCnt] == 'Q')
		{
			iRetValue = FALSE;
			break;
		}
	}
	return iRetValue;
}
// 指定列方向にクイーンがあるかをチェック
int iCheckCol(char ppchBoard[N_QUEEN][N_QUEEN], int iCol)
{
	int iCnt;
	int iRetValue;
	iRetValue = TRUE;
	for (iCnt = 0; iCnt < N_QUEEN; iCnt++)
	{
		if (ppchBoard[iCnt][iCol] == 'Q')
		{
			iRetValue = FALSE;
			break;
		}
	}
	return iRetValue;
}
// 指定位置の斜め方向にクイーンがあるかをチェック
int iCheckCross(char ppchBoard[N_QUEEN][N_QUEEN], int iRow, int iCol)
{
	int iCnt1;
	int iCnt2;
	int iCheckRow;
	int iCheckCol;
	int aiDirection[4][2] = { {-1,-1}, {-1,1}, {1,-1}, {1,1} };
	int iRetValue;
	iRetValue = TRUE;

	// 一つずつ広げていってチェック
	for (iCnt1 = 1; iCnt1 < N_QUEEN; iCnt1++)
	{
		// 4方向確認
		for (iCnt2 = 0; iCnt2 < 4; iCnt2++)
		{
			iCheckRow = iRow + (aiDirection[iCnt2][0] * iCnt1);
			iCheckCol = iCol + (aiDirection[iCnt2][1] * iCnt1);
			if ((iCheckRow >= 0) && (iCheckRow < N_QUEEN) &&
				(iCheckCol >= 0) && (iCheckCol < N_QUEEN))
			{
				if (ppchBoard[iCheckRow][iCheckCol] == 'Q')
				{
					iRetValue = FALSE;
					break;
				}
			}
		}
	}
	return iRetValue;
}
// 盤面をコピー
void vdCopyBoard(char ppchBoardCopy[N_QUEEN][N_QUEEN], char ppchBoard[N_QUEEN][N_QUEEN])
{
	int iCnt1;
	int iCnt2;
	// 盤面初期化
	for (iCnt1 = 0; iCnt1 < N_QUEEN; iCnt1++)
	{
		for (iCnt2 = 0; iCnt2 < N_QUEEN; iCnt2++)
		{
			ppchBoardCopy[iCnt1][iCnt2] = ppchBoard[iCnt1][iCnt2];
		}
	}
	return;
}
// 盤面を出力
void vdPrintBoard(char ppchBoard[N_QUEEN][N_QUEEN])
{
	int iCnt1;
	int iCnt2;
	// 盤面初期化
	for (iCnt1 = 0; iCnt1 < N_QUEEN; iCnt1++)
	{
		for (iCnt2 = 0; iCnt2 < N_QUEEN; iCnt2++)
		{
			printf("%c", ppchBoard[iCnt1][iCnt2]);
		}
		printf("\n");
	}

	return;
}
