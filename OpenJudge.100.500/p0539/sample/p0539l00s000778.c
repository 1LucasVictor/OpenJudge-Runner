/* ex3_4 KitamoriFumiya */
#include <stdio.h>

int main(void){
	
	int dividend, divisor, quotient, surplus; // dividend(割られる数), divisor(割る数), quotient(商), surplus(余り)をint型の変数として宣言
	scanf("%d", &dividend); // dividendを入力
	
	divisor = 1; // 割る数の初期値を1にする
	// dividendを1から9までの整数で割る
	while (divisor < 10){
		quotient = dividend / divisor; // 商を求める
		surplus = dividend % divisor; // 余りを求める
		// もし1から9まで順にdividendを割っていた時にdivindendが割り切れ、かつ商が1以上9以下なら途中でループを抜け出す
		if ( 0 < quotient && quotient < 10 && surplus == 0) break;
		divisor++; // 割る数を1ずつ増やしていく
	}
	
	// もし1から9まで順にdividendを割っていた時にdivindendが割り切れ、かつ商が1以上9以下ならdividendを1以上9以下の2つの整数の積で表せるのでYesを出力
	if ( 0 < quotient && quotient < 10 && surplus == 0){
		printf("Yes\n");
	}
	// それ以外はNoを出力
	else{
		printf("No\n");
	}
	
	return 0;
}