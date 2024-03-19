#include<stdio.h>

int roundup(double x);

int main(void){
	double debt;
	int debt2;
	double rishi;
	int n;	//年数入力用変数
	int i;	//ループ用変数
	debt = 100000;
	rishi = 1.05;

	scanf("%d", &n);

	for (i = 0; i < n; i++){
		debt = debt*rishi;
	}
	debt2 = roundup(debt / 10000);
	debt2 *= 10000;
	printf("%d\n", debt2);

	return 0;

}

int roundup(double x){
	int y;

	x += 0.9;
	y = (int)x;
	return y;
}