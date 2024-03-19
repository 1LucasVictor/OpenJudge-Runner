#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
	long int** ppiA;
	long int** ppiB;
	long int** ppiC;
	int iHeightA;
	int iWeigthA;
	int iHeightB;
	int iWeigthB;
	int iHeightC;
	int iWeigthC;
	int iCountHeight;
	int iCountWeigth;
	int iCountIP;
	scanf("%d %d %d\n", &iHeightA, &iWeigthA, &iWeigthB);
	iHeightB = iWeigthA;
	iHeightC = iHeightA;
	iWeigthC = iWeigthB;
	ppiA = (int**)malloc(sizeof(long int*) * iHeightA);
	ppiB = (int**)malloc(sizeof(long int*) * iHeightB);
	ppiC = (int**)malloc(sizeof(long int*) * iHeightC);
	for (iCountHeight = 0; iCountHeight < iHeightA; iCountHeight++)
	{
		ppiA[iCountHeight] = (int*)malloc(sizeof(long int) * iWeigthA);
	}
	for (iCountHeight = 0; iCountHeight < iHeightB; iCountHeight++)
	{
		ppiB[iCountHeight] = (int*)malloc(sizeof(long int) * iWeigthB);
	}
	for (iCountHeight = 0; iCountHeight < iHeightC; iCountHeight++)
	{
		ppiC[iCountHeight] = (int*)malloc(sizeof(long int) * iWeigthC);
		for (iCountWeigth = 0; iCountWeigth < iWeigthC; iCountWeigth++)
		{
			ppiC[iCountHeight][iCountWeigth] = 0;
		}
	}

	for (iCountHeight = 0; iCountHeight < iHeightA; iCountHeight++)
	{
		for (iCountWeigth = 0; iCountWeigth < iWeigthA; iCountWeigth++)
		{
			scanf("%ld", &ppiA[iCountHeight][iCountWeigth]);
		}
	}
	for (iCountHeight = 0; iCountHeight < iHeightB; iCountHeight++)
	{
		for (iCountWeigth = 0; iCountWeigth < iWeigthB; iCountWeigth++)
		{
			scanf("%ld", &ppiB[iCountHeight][iCountWeigth]);
		}
	}

	for (iCountHeight = 0; iCountHeight < iHeightA; iCountHeight++)
	{
		for (iCountWeigth = 0; iCountWeigth < iWeigthB; iCountWeigth++)
		{
			for (iCountIP = 0; iCountIP < iWeigthA; iCountIP++)
			{
				ppiC[iCountHeight][iCountWeigth] += ppiA[iCountHeight][iCountIP] * ppiB[iCountIP][iCountWeigth];
			}
		}
	}
	for (iCountHeight = 0; iCountHeight < iHeightC; iCountHeight++)
	{
		for (iCountWeigth = 0; iCountWeigth < iWeigthC; iCountWeigth++)
		{
			printf("%ld", ppiC[iCountHeight][iCountWeigth]);
			if (iCountWeigth == iWeigthC - 1)
			{
				printf("\n");
			}
			else
			{
				printf(" ");
			}
		}
	}

	for (iCountHeight = 0; iCountHeight < iHeightA; iCountHeight++)
	{
		free(ppiA[iCountHeight]);
	}
	for (iCountHeight = 0; iCountHeight < iHeightB; iCountHeight++)
	{
		free(ppiB[iCountHeight]);
	}
	for (iCountHeight = 0; iCountHeight < iHeightC; iCountHeight++)
	{
		free(ppiC[iCountHeight]);
	}
	free(ppiA);
	free(ppiB);
	free(ppiC);
}
