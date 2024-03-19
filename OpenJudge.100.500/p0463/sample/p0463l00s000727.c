#include <stdio.h>
#include <stdlib.h>


int main()
{
	//変数宣言
	int N;
	
	
	//初期入力
	scanf("%d",&N);
	
	//最終出力
	N %= 10;
	
	switch(N){
	case 2:
	case 4:
	case 5:
	case 7:
	case 9:
		printf("hon");
		break;
	case 0:
	case 1:
	case 6:
	case 8:
		printf("pon");
		break;
	case 3:
		printf("bon");
		break;
	default:
		break;
	}

	
	return 0;
}