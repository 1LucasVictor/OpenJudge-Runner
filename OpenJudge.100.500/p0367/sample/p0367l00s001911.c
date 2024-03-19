#include <stdio.h>

int main(void)
{
	//range_startは範囲の始まり、range_endは範囲の終わり、count_divisorは約数の数を格納
	int range_start, range_end, base;
	int i, count_divisor;

	scanf("%d %d %d", &range_start, &range_end, &base);
	//初期値は0
	count_divisor = 0;

	//範囲の間だけ繰り返す
	for(i = range_start; i <= range_end; i++){
		//(base / i)の余りが0なら約数
		if(!(base % i)){
			count_divisor++;
		}
	}

	//結果を出力
	printf("%d\n", count_divisor);

	return 0;
}
