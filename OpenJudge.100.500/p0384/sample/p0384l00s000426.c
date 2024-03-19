#include <stdio.h>

int main()
{
	char chLetter;	// 入力された1文字
	char chDiffer;	// 'A' - 'a' のコード差

	chDiffer = 'A' - 'a';

	// 入力：文字列を1文字ずつ読み取る
	while ((chLetter = getc(stdin)) != '\n')
	{
		// 大文字か小文字か判定
		if ('a' <= chLetter && chLetter <= 'z')
		{
			chLetter += chDiffer;
		}
		else if('A' <= chLetter && chLetter <= 'Z')
		{
			chLetter -= chDiffer;
		}

		// 出力：大文字/小文字を反転した結果
		printf("%c", chLetter);
	}
	printf("\n");

	return 0;
}
