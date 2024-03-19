#include <stdio.h>
#include <string.h>

/*
STRLENGTHは入力される文字列の最大の長さ
CMDLENGTHは入力される命令の最大の長さ(広めに確保)
*/
#define STRLENGTH 1000
#define CMDLENGTH 10

//それぞれ文字列を出力、逆順、置き換える関数
void print(char *str, int start_point, int end_point);
void reverse(char *str, int start_point, int end_point);
void replace(char *dst, char *src, int start_point, int end_point);

int main(void)
{
	int i, start_point, end_point, data_count;
	//cmdは"print"、"revrese"、"replace"のいずれかが入力される
	char cmd[CMDLENGTH];
	//new_strは"replace"が入力された際に置き換える文字列を格納
	char str[STRLENGTH], new_str[STRLENGTH];

	//文字列とデータセットの個数を入力
	scanf("%s", str);
	scanf("%d", &data_count);

	//データセットの個数分繰り返す
	for(i = 0; i < data_count; i++){
		//命令、開始位置、終了位置を入力
		scanf("%s %d %d", cmd, &start_point, &end_point);

		//命令に応じた関数を呼び出す
		if(!(strcmp(cmd, "print"))){
			print(str, start_point, end_point);
		}
		else if(!(strcmp(cmd, "reverse"))){
			reverse(str, start_point, end_point);
		}
		else if(!(strcmp(cmd, "replace"))){
			scanf("%s", new_str);
			replace(str, new_str, start_point, end_point);
		}
	}

	return 0;
}

//start_pointからend_pointまでの文字列を出力する関数
void print(char *str, int start_point, int end_point)
{
	//outputに出力する文字列を格納
	int size;
	char output[STRLENGTH];

	//start_pointからend_pointまでの文字列をoutputにコピーし出力する
	size = (end_point - start_point) + 1;
	strncpy(output, &str[start_point], size);
	output[size] = '\0';

	printf("%s\n", output);
}

//start_pointからend_pointまでの文字列を逆順にする関数
void reverse(char *str, int start_point, int end_point)
{
	//workには逆順にする範囲の文字列を格納
	int i, size;
	char work[STRLENGTH];

	size = (end_point - start_point) + 1;
	strncpy(work, &str[start_point], size);

	//文字列を逆順にする
	for(i = 0; i < size; i++){
		*(str + start_point + i) = work[size - i - 1];
	}
}

//start_pointからend_pointまでの文字列を置き換える関数
void replace(char *dst, char *src, int start_point, int end_point)
{
	int i, size;

	size = (end_point - start_point) + 1;
	//文字を1つずつ置き換える
	for(i = 0; i < size; i++){
		*(dst + start_point + i) = *(src + i);
	}
}
