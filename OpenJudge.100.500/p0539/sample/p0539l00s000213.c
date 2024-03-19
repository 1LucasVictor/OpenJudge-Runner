/*ex3_4
ryo_1129*/
#include <stdio.h>

int main(void){
	int N; //変数宣言
	scanf("%d",&N); //入力
	int divisor = 9; //割る数、
	//割る数が２以上９以下の間
	while(divisor >= 2){
		//余りが０かつ商が１以上９以下の場合、Yesと表示する 
		if(N / divisor !=0 && N % divisor == 0 && N / divisor <= 9){
			printf("Yes\n");
			break;
		}
		divisor--; //割る数を１増やす
	}
	// Yesが表示されなかった場合、Noを表示する。
	if(divisor == 1){
		printf("No\n");
	}
	return 0;
}