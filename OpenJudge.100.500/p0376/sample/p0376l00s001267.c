#include<stdio.h>
int main(void){
	int i, n, a[100];
	//数列の長さを入力
	scanf("%d", &n);
	//数列を入力
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	//数列を逆順に表示
	for(i = n - 1; i >= 0; i--){
		if(i == 0){
			printf("%d\n", a[i]);
		}else{
			printf("%d ", a[i]);
		}
	}
	return 0;
}