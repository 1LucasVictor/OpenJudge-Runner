#include<stdio.h>

int main(void) {

	int H;		//モンスターの体力H
	int A;		//サーバルが1回攻撃したときに減る体力A
	int N = 0;	//攻撃回数N

	//モンスターの体力Hを入力
	//サーバルの1回攻撃したときに減る体力Aを入力
	scanf("%d %d", &H,&A);

	N = H / A;

	if (H - A * N > 0) {
		N = N + 1;
	}

	printf("%d \n", N);



	return 0;
}