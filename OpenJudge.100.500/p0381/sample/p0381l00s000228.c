#include<stdio.h>
int main(){
	unsigned short usW_D_set;            	/* 使用できる最大値格納用変数 */
	unsigned long ulW_D_tag;            	/* 目標値格納用変数 */
	signed short ssW_D_mid;            	/* 計算用変数 */
	unsigned short usW_D_agg[100];       	/* 計算結果格納用配列 */
	unsigned short usW_C_i, usW_C_j;           	/* ループ変数 */
	unsigned short usW_C_input_count = 0;	/* 入力数カウンタ */
	unsigned short usW_C_num_count = 0;  	/* 目標を満足する値のカウンタ */
	
	/* 配列の初期化 */
	for(usW_C_i = 0;usW_C_i < 100;usW_C_i++){
		usW_D_agg[usW_C_i] = 0;
	}
	
	/* 数値の入力、演算を無限ループ */
	while(1){
		/* 使用できる最大値、目標値の入力 */
		scanf("%d %ld", &usW_D_set, &ulW_D_tag);
		
		/* 終了処理 */
		if(usW_D_set == 0 && ulW_D_tag == 0){
			break;
		}
		/* カウンタをリセット */
		usW_C_num_count = 0;
		
		/* 目標を満足する値をカウント */
		for(usW_C_i = 1;usW_C_i < usW_D_set;usW_C_i++){
			for(usW_C_j = usW_C_i;usW_C_j <= usW_D_set;usW_C_j++){
				/* usW_C_i + usW_C_j と目標値の差をssW_D_midに代入 */
				ssW_D_mid = ulW_D_tag - (usW_C_i + usW_C_j);
				/* ssW_D_misがusW_C_iとusW_C_jの間にある場合カウント*/
				if(ssW_D_mid > usW_C_i && ssW_D_mid < usW_C_j){
					usW_C_num_count++;
				}
			}
		}
		
		/* カウントした結果を格納 */
		usW_D_agg[usW_C_input_count] = usW_C_num_count;
		/* 入力数をカウント */
		usW_C_input_count++;
	}
	
	/* 結果の出力 */
	for(usW_C_i = 0;usW_C_i < usW_C_input_count;usW_C_i++){
		printf("%d\n", usW_D_agg[usW_C_i]);
	}
	
	return 0;
}

