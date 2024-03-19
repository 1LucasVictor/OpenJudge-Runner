/* ファイル名：ITP1_8_A.c	*/
/* 内容：与えられた文字列の小文字と大文字を入れ替える	*/

/* include	*/
#include <stdio.h>
#include <ctype.h>

/* 外部変数宣言	*/

/* プロトタイプ宣言	*/

/* 関数名:main	*/
/* 処理内容:与えられた文字列の小文字と大文字を入れ替える	*/
int main( void )
{
	/* 内部変数定義	*/
	/* 入力・処理・出力	*/
	char str[1200];	/* 入力される文字列	*/
	
	/* 処理	*/
	int i;	/* ループ用変数	*/
	scanf("%[^\n]%s",str);	/* 文字列の取得		*/
	
	/* 1文字ずつ処理していく	*/
	for(i = 0; str[i] != '\0'; i++){
		/* アルファベットの場合	*/
		if(isalpha(str[i])){
			/* 大文字の場合	*/
			if(isupper(str[i])){
				str[i] = tolower(str[i]);/* 小文字に変換	*/
			}
			/* 小文字の場合	*/
			else if(islower(str[i])){
				str[i] = toupper(str[i]);/* 大文字に変換	*/
			}
			else{
				/* 処理なし	*/
			}
		}
		/* アルファベット以外の場合	*/
		else{
			/* 処理なし(そのまま出力)*/
		}
	}
	
	/* 結果出力	*/
	printf("%s\n",str);
	return 0;
}

