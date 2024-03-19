#include<stdio.h>
#include<string.h>

int main(void) {

	char acContest[4];		//先週行われたコンテストがABCとARCのどちらだったかを入れる配列変数
	//文字列を入力
	scanf("%s", acContest);
	//入力される文字列に応じた文字列を表示
	if (strcmp(acContest, "ABC") == 0) {
		printf("\nARC\n");
	}
	else {
		printf("\nABC\n");
	}
	return 0;
}