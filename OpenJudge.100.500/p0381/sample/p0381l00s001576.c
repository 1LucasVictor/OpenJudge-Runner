#include <stdio.h>

int main(void)
{
	/*
	iとjとkはループ変数、limit_valueとsum_valueは入力される上限値と合計値
	calc_valueは3つの数値を足した結果を、countは組み合わせの数を格納
	*/

	int i, j, k;
	int limit_value, sum_value;
	int calc_value, count;

	while(1){
		//初期値は0
		count = 0;
		scanf("%d %d", &limit_value, &sum_value);

		//データセットがともに0ならば終了
		if((limit_value == 0) && (sum_value == 0)){
			break;
		}
		else{
			//総当たりで組み合わせを探す
			for(i = 1; i <= (limit_value - 2); i++){
				for(j = (i + 1); j <= (limit_value - 1); j++){
					for(k = (j + 1); k <= limit_value; k++){
						calc_value = i + j + k;
						if(calc_value == sum_value){
							count++;
						}
					}
				}
			}
			//結果を出力
			printf("%d\n", count);
		}
	}

	return 0;
}
