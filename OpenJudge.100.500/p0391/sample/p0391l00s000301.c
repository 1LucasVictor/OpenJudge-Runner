#include <stdio.h>
#include <string.h>

// 入力文字を以下の法則に従って書き換え
// print a b : str の a 文字目から b 文字目までを出力する。
// reverse a b : str の a 文字目から b 文字目までを逆順にする。
// replace a b p : str の a 文字目から b 文字目までを p に置き換える。
int main()
{
	char achInputText[1000];
	int iQuestionNum;
	char achQuestion[10];
	char achReplaceText[1000];
	int iInputA, iInputB;
	int iCnt, iCnt2;
	char chSwapTmp;

	scanf("%s", achInputText);
	scanf("%d", &iQuestionNum);

	for (iCnt = 0; iCnt < iQuestionNum; iCnt++)
	{
		scanf("%s", achQuestion);

		// 置き換えなら
		if (strcmp("replace", achQuestion) == 0)
		{
			scanf("%d %d %s", &iInputA, &iInputB, achReplaceText);
			for (iCnt2 = 0; iCnt2 < iInputB - iInputA + 1; iCnt2++)
			{
				achInputText[iInputA + iCnt2] = achReplaceText[iCnt2];
			}
		}
		else if (strcmp("reverse", achQuestion) == 0)
		{
			scanf("%d %d", &iInputA, &iInputB);
			// 指定された文字の頭からと後ろからで入れ替え
			for (iCnt2 = 0; iCnt2 < (iInputB - iInputA) / 2 + 1; iCnt2++)
			{
				chSwapTmp = achInputText[iInputA + iCnt2];
				achInputText[iInputA + iCnt2] = achInputText[iInputB - iCnt2];
				achInputText[iInputB - iCnt2] = chSwapTmp;
			}
		}
		else
		{
			scanf("%d %d", &iInputA, &iInputB);
			// 指定範囲で出力
			for (iCnt2 = iInputA; iCnt2 < iInputB + 1; iCnt2++)
			{
				printf("%c", achInputText[iCnt2]);
			}
			printf("\n");
		}
	}

	return 0;
}
