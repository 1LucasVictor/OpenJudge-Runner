#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//main関数
int main(void){

	//1.Nの１桁目を算出する
	int N = 0;
	N = N % 10;

	//コードを入力してください。
	if(N == 2 || N == 4 || N == 5 || N == 7 || N == 9)
	{
		printf("hon");
	}
	if(N == 0 || N == 1 || N == 6 || N == 8)
	{
		printf("pon");
	}
	if(N == 3)
	{
		printf("bon");
	}

	return 0;
}
