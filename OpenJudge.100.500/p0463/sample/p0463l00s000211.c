/*ex3_2
ryo_1129*/
#include <stdio.h>

int main(void){
	int N; //変数宣言
	scanf("%d",&N); //入力
	//１の位が３の時、bonを出力
	if(N%10 ==3){
		printf("bon\n");
	//１の位が0,1,6,8の時、ponを出力
	}else if(N%10 == 0 || N%10 == 1|| N%10 == 6 || N%10 == 8){
		printf("pon\n");
	//それ以外、honを出力
	}else{
		printf("hon\n");
	}
	
}