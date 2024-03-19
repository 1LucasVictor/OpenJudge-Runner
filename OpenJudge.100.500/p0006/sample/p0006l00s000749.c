#include <stdio.h>

// 5%利子を加算
int plus_five_percent(int);
// 下三桁を取得
int get_three(int);
// 切り上げをするかどうか
int is_rounding_up(int);
// 切り上げ処理
int rounding_up(int);

int main(){
	int i, n, debt=100000;
	// 5% 加算 → 下3桁を確認 →
	// 下三桁が、1以上の場合は、切り上げ
	// 切り上げ = 3桁未満を引いてから1000円プラス
	scanf("%d", &n);

	for(i=0; i<n;i++){
		// 5%加算
		debt = plus_five_percent(debt);
		// 切り上げ処理
		debt = rounding_up(debt);
	}

	printf("%d\n", debt);

	return 0;
}

int plus_five_percent(int num){
	return num + num * 0.05;
}

int get_three(int num){
	return num % 1000;
}

int is_rounding_up(int num){
	return get_three(num) > 0;
}

int rounding_up(int num){
	// 下三桁を引いてから、1000足す
	if(is_rounding_up(num)){
		return num - get_three(num) + 1000;
	// 下三桁が0だったらそのまま
	} else {
		return num;
	}
}