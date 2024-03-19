#include<stdio.h>

unsigned int DifferentCount(char* a_s, char* a_t);

int main(void) {
	//文字列の定義
	static char s[200001],t[200001];
	
	//文字列の入力
	scanf("%s", s);
	scanf("%s", t);
	//文字列の異なる文字の数を出力
	printf("\n%d\n", DifferentCount(s, t));

	return 0;
}

/******
*　2つの文字列の異なる文字の数を数える関数
*　char* a_s、char* a_t　入力された2つの文字列
*/
unsigned int DifferentCount(char* a_s, char* a_t) {
	unsigned int i;
	unsigned count = 0;			//異なる文字の数を数える変数

	for (i = 0;i <= 200001;i++) {
		//文字が異なる場合カウントアップ
		if ((a_s[i] != a_t[i]) && (a_s[i] != 0x00) && (a_t[i] != 0x00)) {
			count++;
		}
		//文字列に終点コードを見つけた場合終了
		else if ((a_s[i] == 0x00) && (a_t[i] == 0x00)) {
			break;
		}
		else {}
	}
	return(count);
}