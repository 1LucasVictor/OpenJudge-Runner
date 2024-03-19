#include<stdio.h>

int main(void) {
	int a;
	//aに入る値を入力
	scanf("%d", &a);
	//計算結果を出力
	printf("\n%d\n", a + a * a + a * a * a);

	return 0;
}