#include<stdio.h>

int main(void) {
	//入力される数字
	int suuti;
	//各桁の数字
	int dig;
	//カウント
	int count = 0;

	scanf("%d", &suuti);
	
  	//処理
	while (suuti)
	{
		dig = suuti % 10;
		count += dig;
		suuti = suuti / 10;
	}

	printf("%d", count);
	return 0;
}