#include <stdio.h>
#include <stdlib.h>

// 足りないトランプを探し、それを表示する
int main()
{
	int iTrumpSize;			// そろっているトランプの枚数
	int iSpadeTrump[13] = { 0 };	// スペードのトランプ
	int iHeartTrump[13] = { 0 };	// ハートのトランプ
	int iClubTrump[13] = { 0 };		// クラブのトランプ
	int iDiamondTrump[13] = { 0 };	// ダイヤのトランプ
	char chInputMark;		// 入力されたトランプの柄
	int iInputNumber;		// 入力されたトランプの数字
	int iCount;				// ループカウンタ

	// 入力：トランプの枚数
	scanf("%d", &iTrumpSize);

	// そろっているトランプを1枚ずつ確認する
	for (iCount = 0; iCount < iTrumpSize; iCount++)
	{
		// 入力：トランプの記号と数字
		scanf(" %c %d", &chInputMark, &iInputNumber);

		// 該当する配列の要素にチェック(=1)する
		switch (chInputMark)
		{
		case 'S':
			iSpadeTrump[iInputNumber - 1] = 1;
			break;
		case 'H':
			iHeartTrump[iInputNumber - 1] = 1;
			break;
		case 'C':
			iClubTrump[iInputNumber - 1] = 1;
			break;
		case 'D':
			iDiamondTrump[iInputNumber - 1] = 1;
			break;
		default:
			break;
		}
	}

	// そろっていないトランプの札を表示する
	for (iCount = 0; iCount < 13; iCount++)
	{
		if (iSpadeTrump[iCount] != 1)
		{
			printf("S %d\n", iCount + 1);
		}
	}
	for (iCount = 0; iCount < 13; iCount++)
	{
		if (iHeartTrump[iCount] != 1)
		{
			printf("H %d\n", iCount + 1);
		}
	}
	for (iCount = 0; iCount < 13; iCount++)
	{
		if (iClubTrump[iCount] != 1)
		{
			printf("C %d\n", iCount + 1);
		}
	}
	for (iCount = 0; iCount < 13; iCount++)
	{
		if (iDiamondTrump[iCount] != 1)
		{
			printf("D %d\n", iCount + 1);
		}
	}
}
