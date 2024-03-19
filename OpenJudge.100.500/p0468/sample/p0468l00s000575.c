#include <stdio.h>

int main(void){
	char S[4]; //入力用変数
	scanf("%s", S);
	
	if (S[1] == 'R'){
		printf("ABC\n");
	}
	else
		printf("ARC\n");
}