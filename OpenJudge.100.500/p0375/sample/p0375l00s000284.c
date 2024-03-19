#include<stdio.h>
int main(void){
	int i, n;
	//値を入力
	scanf("%d", &n);
	//3の倍数,3のつく数字を出力
	for(i = 1; i <= n; i++){
		int x = i;
		if(x % 3 == 0){
			printf(" %d", i);
		}else if(x / 10 == 3){
			printf(" %d", i);
		}else if(x / 100 == 3){
			printf(" %d", i);
		}else if(x % 10 == 3){
			printf(" %d", i);
		}
	}
	printf("\n");
	return 0;
}