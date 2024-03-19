#include <stdio.h>

//問題文より、入力される文字列の最大の長さ
#define MAXLENGTH 1200

int main(void)
{
	int i;
	char str[MAXLENGTH];

	//\n(改行文字)以外を読み込む(ホワイトスペース対策)
	scanf("%[^\n]", str);

	//添字は0から
	i = 0;
	//文字列の最後まで繰り返す
	while(str[i] != '\0'){
		//大文字なら小文字へ変換
		if((str[i] >= 'A') && (str[i] <= 'Z')){
			str[i] += ('a' - 'A');
		}
		//小文字なら大文字へ変換
		else if((str[i] >= 'a') && (str[i] <= 'z')){
			str[i] -= ('a' - 'A');
		}
		//添字を一つ進める
		i++;
	}

	//結果を出力
	printf("%s\n", str);

	return 0;
}
