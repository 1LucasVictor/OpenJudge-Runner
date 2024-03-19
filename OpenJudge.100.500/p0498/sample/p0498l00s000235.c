#include<stdio.h>

int main(void){
	int iN;
	//ページ数を入力
	scanf("%d", &iN);
	//印刷に必要な最小の紙枚数を出力
	printf("%d", (iN + 1) / 2);

	return 0;
}