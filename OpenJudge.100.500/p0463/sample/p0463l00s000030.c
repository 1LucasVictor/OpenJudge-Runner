/*ex3_2
ryo_1129*/
#include <stdio.h>

int main(void){
	int N,r; //変数宣言
	scanf("%d",&N); //入力
	r = N%10; // remainder
	
	//１の位が３の時、bonを出力
	if(r ==3){
		printf("bon\n");
	//１の位が0,1,6,8の時、ponを出力
	}else if(r == 0 || r == 1|| r == 6 || r == 8){
		printf("pon\n");
	//それ以外、honを出力
	}else{
		printf("hon\n");
	}
	
}