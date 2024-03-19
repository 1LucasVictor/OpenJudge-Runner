#include <stdio.h>

// 行列AとベクトルBを読み込んで、A*B=Cを計算してCを出力
// 入力として、Aの大きさと、A,Bの値を受け取る
int main()
{
	int iCnt1, iCnt2;
	int iInputValue;
	int iInputN, iInputM;
	int** aiArrayA;
	int* aiVecB;
	int* aiVecC;

	scanf("%d %d", &iInputN, &iInputM);

	aiArrayA = (int** ) malloc(sizeof(int *) * iInputN);
	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
	{
		aiArrayA[iCnt1] = (int* ) malloc(sizeof(int) * iInputM);
	}

	aiVecB = (int*) malloc(sizeof(int) * iInputM);
	aiVecC = (int*) malloc(sizeof(int) * iInputM);
	
	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
	{
		for (iCnt2 = 0; iCnt2 < iInputM; iCnt2++)
		{
			scanf("%d", &aiArrayA[iCnt1][iCnt2]);
		}
	}

	for (iCnt1 = 0; iCnt1 < iInputM; iCnt1++)
	{
		scanf("%d", &aiVecB[iCnt1]);
	}

	for (iCnt1 = 0; iCnt1 < iInputN; iCnt1++)
	{
		aiVecC[iCnt1] = 0;
		for (iCnt2 = 0; iCnt2 < iInputM; iCnt2++)
		{
			aiVecC[iCnt1] += aiArrayA[iCnt1][iCnt2] * aiVecB[iCnt2];
		}
		printf("%d\n", aiVecC[iCnt1]);
	}
	
	return 0;
}
