#include<stdio.h>


#define ALL_CARD_NUM 52
#define CARD_NUM 13

int main()
{
	int n;
	int iCard[ALL_CARD_NUM];	//1なら持ってる0なら持ってない
	char szMark[2];
	int iCardNum;
	int iCount;

	//配列の初期化
	for (iCount = 0; iCount < ALL_CARD_NUM; iCount++)
	{
		iCard[iCount] = 0;
	}

	scanf("%d", &n);
	for (iCount = 0; iCount < n; iCount++)
	{
		scanf("%s", szMark);
		scanf("%d", &iCardNum);
		//絵柄がスペード
		if (strcmp(szMark,"S")==0)
		{
			iCard[iCardNum-1] = 1;
		}
		//絵柄がハート
		else if (strcmp(szMark, "H") == 0)
		{
			iCard[iCardNum - 1+ CARD_NUM] = 1;
		}
		//絵柄がクラブ
		else if (strcmp(szMark, "C") == 0)
		{
			iCard[iCardNum - 1 + (CARD_NUM *2)] = 1;
		}
		//絵柄がダイヤ
		else if (strcmp(szMark, "D") == 0)
		{
			iCard[iCardNum - 1 + (CARD_NUM * 3)] = 1;
		}
		else
		{
			printf("指定した入力をしてください\n");
		}

	}

	for (iCount = 0; iCount < ALL_CARD_NUM; iCount++)
	{
		if (iCard[iCount] == 0)
		{
			switch (iCount / CARD_NUM)
			{
			case 0:
				printf("S %d\n", iCount % CARD_NUM + 1);
				break;
			
			case 1:
				printf("H %d\n", iCount % CARD_NUM + 1);
				break;
			
			case 2:
				printf("C %d\n", iCount % CARD_NUM + 1);
				break;
			
			case 3:
				printf("D %d\n", iCount % CARD_NUM + 1);
				break;
			default:
				break;
			}

		}
	}

	
}
