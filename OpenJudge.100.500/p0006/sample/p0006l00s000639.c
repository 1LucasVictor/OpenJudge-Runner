#include<stdio.h>

double roundup(double x);

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
		debt = roundup(debt/1000);
		debt *= 1000;
	}
	debt2 = (int)debt;
	printf("%d\n", debt2);

	return 0;

}

double roundup(double x){
	if (x != (int)x){
		x += 1;
		x = (int)x;
	}
	return x;

}