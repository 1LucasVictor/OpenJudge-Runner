#include<stdio.h>

int main() {
	
	int num = 0;

	scanf("%d", &num);

	switch (num % 10)
	{
	case 3:
		printf("bon\n");
		break;
	case 0:
	case 1:
	case 6:
	case 8:
		printf("pon\n");
		break;
	default:
		printf("hon\n");
		break;
	}
	
	// 終了コードは0
	return 0;
}