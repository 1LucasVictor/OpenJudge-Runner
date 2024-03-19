/* ex3_4
   moka223711 */

#include <stdio.h>

int main(void){
	int num, dis = 0;
	scanf("%d", &num);

	// numを1から9で割って、余りが0かつ商が9以下になっているものを探す
	// 割れるものが見つかったらdを1に変える
	for(int i = 1; i <= 9; i++){
		if(num % i == 0 && num / i <= 9){
			dis = 1;
			break;
		}
	}
	
	// 上のfor文で1から9で割り切れるものが見つかったときd == 1となっているため
	// if文が実行される、なかったときはelse文の実行
	if(dis){
		printf("Yes");
	}
	else{
		printf("No");
	}
  
	return 0;
}
