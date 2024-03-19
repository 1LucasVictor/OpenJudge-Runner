#include <stdio.h>

typedef struct list {
	char chData;
	struct list* pstNext;
}LIST;

void vdSearchAddress(int iValue, LIST** ppstCurrent);

// 文字列Tを、先頭から入力hまでの文字を末尾に連結するシャッフルをM回繰り返して最後に出力
// "abcde"をh=3でシャッフルすると"deabc"となる
int main()
{
	int iInputM, iInputH;
	LIST* pstHead;		// 構造体配列の先頭アドレス
	LIST* pstCurrent;	// 現在見ている構造体のアドレス
	LIST astList[200];
	char achInput[200];
	int iCnt, iCnt2;
	int iInputLength;

	// 改行文字まで読み込み(文字列長取得)
	scanf("%s", achInput);
	while (achInput[0] != '-')
	{
		// リストの先頭アドレスを格納
		pstHead = &astList[0];

		iInputLength = 0;
		while (achInput[iInputLength] != '\0')
		{
			// 一文字目が'-'なら終了
			astList[iInputLength].chData = achInput[iInputLength];
			astList[iInputLength].pstNext = &astList[iInputLength + 1];
			iInputLength++;
		}

		// 末尾のポインタをNULL
		if (iInputLength > 0) {
			astList[iInputLength - 1].pstNext = NULL;
		}
		else
		{
			// 1文字も入力されていないなら終了
			pstHead = NULL;
			return 0;
		}

		scanf("%d", &iInputM);

		// シャッフル（リストのポインタの付け替え）
		for (iCnt = 0; iCnt < iInputM; iCnt++)
		{
			scanf("%d", &iInputH);

			// 末尾のポインタを先頭に付け変え
			pstCurrent = pstHead;
			vdSearchAddress(iInputLength, &pstCurrent);
			pstCurrent->pstNext = pstHead;

			// 先頭ポインタを付け変え
			pstCurrent = pstHead;
			vdSearchAddress(iInputH, &pstCurrent);
			pstHead = pstCurrent->pstNext;

			// 末尾をNULL
			pstCurrent = pstHead;
			vdSearchAddress(iInputLength, &pstCurrent);
			pstCurrent->pstNext = NULL;
		}


		// 次のポインタがNULLになるまで先頭から順にたどって出力
		pstCurrent = pstHead;
		while (pstCurrent->pstNext != NULL)
		{
			printf("%c", pstCurrent->chData);
			pstCurrent = pstCurrent->pstNext;
		}
		printf("%c\n", pstCurrent->chData);

		scanf("%s", achInput);
	}

	return 0;
}

// ppstCurrentの先のポインタにiValue番目のリストのアドレスセット
void vdSearchAddress(int iValue, LIST** ppstCurrent)
{
	while (iValue > 1)
	{
		//printf("%c", (*ppstCurrent)->chData);
		*ppstCurrent = (*ppstCurrent)->pstNext;
		iValue--;
	}
	return;
}


