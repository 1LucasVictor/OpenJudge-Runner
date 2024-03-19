#include <stdio.h>
#include <math.h>

int main() {
	int A, B;
	double K;

	//AとBを読み込む
	scanf("%d %d", &A, &B);

	//Kの値の計算
	K = (A + B) / 2.0;

	(ceil(K) != floor(K)) ? printf("IMPOSSIBLE\n") : printf("%d\n", (int) K);
}