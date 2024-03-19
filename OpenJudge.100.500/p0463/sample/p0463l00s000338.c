#include<stdio.h>

int main(void) {
	unsigned int	iNumber;
	char			cCondition = 0;
	//正の整数を入力
	scanf("%d", &iNumber);
	//入力された数に応じた"本"の読み方を出力
	switch (iNumber % 10)
	{
	case 0:
	case 1:
	case 6:
	case 8:
		printf("pon\n");
		break;		
	case 2:
	case 4:
	case 5:
	case 7:
	case 9:
		printf("hon\n");
		break;
	case 3:
		printf("bon\n");
		break;
	default:
		break;
	}
	return 0;
}