#include <stdio.h>
#include <string.h>

/*
MAX_DATASETは入力されるデータセットの最大個数
MAX_SHUFFLEはシャッフルする最大回数
CARD_MAXLENGTHは入力される最大の文字数
*/
#define MAX_DATASET 10
#define MAX_SHUFFLE 100
#define CARD_MAXLENGTH 200

int main(void)
{
	//data_countは入力されたデータセットを、first_pointは文字列の先頭位置を格納
	int i, j, data_count, first_point;
	//shuffle_pointはカードをシャッフルする位置を、shuffle_countはシャッフルする回数を格納
	int shuffle_point[MAX_DATASET][MAX_SHUFFLE], shuffle_count[MAX_DATASET];
	char work[CARD_MAXLENGTH];
	//cardはシャッフルする文字列を格納(連結用に2倍の領域を確保)
	char card[MAX_DATASET][2 * CARD_MAXLENGTH];

	data_count = 0;
	while(scanf("%s", card[data_count])){
		//データが '-' なら入力終了
		if(card[data_count][0] == '-'){
			break;
		}
		else{
			//シャッフルする回数を入力
			scanf("%d", &shuffle_count[data_count]);
			//シャッフルする位置を入力
			for(i = 0; i < shuffle_count[data_count]; i++){
				scanf("%d", &shuffle_point[data_count][i]);
			}
			data_count++;
		}
	}

	//入力されたデータセットの回数分繰り返す
	for(i = 0; i < data_count; i++){
		first_point = 0;
		for(j = 0; j < shuffle_count[i]; j++){
			//先頭位置からカードを取り出す位置までworkにコピー
			strncpy(work, &(card[i][first_point]), shuffle_point[i][j]);
			//文字列の最後に '\0' を挿入
			work[shuffle_point[i][j]] = '\0';
			//取り出したカードをシャッフルもとに連結
			strcat(card[i], work);
			//先頭位置をずらす
			first_point += shuffle_point[i][j];
		}
		//結果の出力
		printf("%s\n", &card[i][first_point]);
	}

	return 0;
}
