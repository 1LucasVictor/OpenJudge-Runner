#include<stdio.h>
int main(){
	unsigned short set;            	/* 使用できる最大値格納用変数 */
	unsigned long tag;            	/* 目標値格納用変数 */
	signed short mid;            	/* 計算用変数 */
	int agg[100];       	/* 計算結果格納用配列 */
	int i, j;           	/* ループ変数 */
	int input_count = 0;	/* 入力数カウンタ */
	int num_count = 0;  	/* 目標を満足する値のカウンタ */
	
	/* 配列の初期化 */
	for(i = 0;i < 100;i++){
		agg[i] = 0;
	}
	
	/* 数値の入力、演算を無限ループ */
	while(1){
		/* 使用できる最大値、目標値の入力 */
		scanf("%d %ld", &set, &tag);
		
		/* 終了処理 */
		if(set == 0 && tag == 0){
			break;
		}
		/* カウンタをリセット */
		num_count = 0;
		
		/* 目標を満足する値をカウント */
		for(i = 1;i < set;i++){
			for(j = i;j <= set;j++){
				/* i + j と目標値の差をmidに代入 */
				mid = tag - (i + j);
				/* midがiとjの間にある場合カウント*/
				if(mid > i && mid < j){
					num_count++;
				}
			}
		}
		
		/* カウントした結果を格納 */
		agg[input_count] = num_count;
		/* 入力数をカウント */
		input_count++;
	}
	
	/* 結果の出力 */
	for(i = 0;i < input_count;i++){
		printf("%d\n", agg[i]);
	}
	
	return 0;
}

