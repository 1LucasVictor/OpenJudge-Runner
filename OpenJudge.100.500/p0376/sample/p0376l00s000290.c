#include <stdio.h>
//#define scanf scanf_s

// N個の整数を受け取って逆順に出力
int main()
{
	int iInputN;
	int aiInputValue[100] = { 0 };
	int iCnt;

	scanf("%d", &iInputN);
	
	for (iCnt = 0; iCnt < iInputN; iCnt++)
	{
		scanf("%d", &aiInputValue[iCnt]);
	}
	iCnt--;

	for (;iCnt > 0; iCnt--)
	{
		printf("%d ", aiInputValue[iCnt]);
	}

	printf("%d\n", aiInputValue[0]);
	
	return 0;
}
