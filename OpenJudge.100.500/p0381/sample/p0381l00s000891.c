#include <stdio.h>

// 1～Nまでの整数を重複なしで3つ使ってXとなる組み合わせの通り数を出力
// N,Xともに0なら終了
int main()
{
	int iInputN, iInputX;
	int iSum;
	int iCnt1, iCnt2, iCnt3;
	int iAns;

	scanf("%d %d", &iInputN, &iInputX);

	while (iInputN != 0 || iInputX != 0)
	{
		iAns = 0;
		// 全通りの組み合わせを順に調べる（１ずつ開始と終了をずらす）
		for (iCnt1 = 1; iCnt1 <= iInputN - 2; iCnt1++)
		{
			for (iCnt2 = iCnt1 + 1; iCnt2 <= iInputN - 1; iCnt2++)
			{
				for (iCnt3 = iCnt2 + 1; iCnt3 <= iInputN; iCnt3++)
				{
					
					iSum = iCnt1 + iCnt2 + iCnt3;
					if (iSum == iInputX)
					{
						//printf("%d,%d,%d\n", iCnt1, iCnt2, iCnt3);
						iAns++;
					}
				}
			}
		}

		printf("%d\n", iAns);

		scanf("%d %d", &iInputN, &iInputX);
	}


	return 0;
}
