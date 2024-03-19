/* ex3_4
   moka223711 */

// 1から9までの2つの数の積として表せるような数であるかを判定する

#include <stdio.h>

int main(void){
	int num, dis = 0; // discriminant
	scanf("%d", &num);

	// numを1から9で割って、余りが0かつ商が9以下になっているものを探す
	// 割れるものが見つかったらdisを1に変える
	for(int i = 1; i <= 9; i++){
		if(num % i == 0 && num / i <= 9){
			dis = 1;
			break;
		}
	}
	
	// 上のfor文で1から9で割り切れるものが見つかったときdis==1となっているため
	// if文が実行される、なかったときはelse文の実行
	if(dis){
		printf("Yes");
	}
	else{
		printf("No");
	}
  
	return 0;
}
