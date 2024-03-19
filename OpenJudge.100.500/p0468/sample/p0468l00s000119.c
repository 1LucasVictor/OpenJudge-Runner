#include<stdio.h>
#include<string.h>

int main(void) {

	char aContest[4];
	//文字列を入力
	scanf("%s", &aContest);
	//入力される文字列に応じた文字列を表示
	if (strcmp(aContest, "ABC") == 0) {
		printf("\nARC\n");
	}
	else if (strcmp(aContest, "ARC" )== 0) {
		printf("\nABC\n");
	}else{}

	return 0;
}