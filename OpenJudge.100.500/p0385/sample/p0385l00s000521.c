#include <stdio.h>
#include <string.h>

//問題文より、入力される最大の桁数1000+1(改行文字分)を要素数とする
#define MAXDIGIT 1001

//各桁の和を計算する関数
int get_ans(char *str);

int main(void)
{
	//iはループ変数、countは入力されたデータセット数を格納
	int i, count;
	char num[MAXDIGIT][MAXDIGIT];

	count = 0;
	//データセットの入力(0ならば入力終了)
	do{
		scanf("%s", num[count]);
		count++;
	}while(strcmp(num[count - 1], "0"));

	//最後の入力(0)に対しては出力しない
	count--;
	//結果の出力
	for(i = 0; i < count; i++){
		printf("%d\n", get_ans(num[i]));
	}

	return 0;
}

int get_ans(char *str)
{
	//ansに各桁の和を格納
	int ans;

	ans = 0;
	//文字列の最後まで繰り返す
	while(*str != '\0'){
		//文字を数値に変換して加算する
		ans += (*str - '0');
		str++;
	}

	return ans;
}
