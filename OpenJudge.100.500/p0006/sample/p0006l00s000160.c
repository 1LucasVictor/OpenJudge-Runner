#include<stdio.h>

int main(){
	int n;
	int i;
	int money = 100000;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		money = (double)money*1.05;


	if (money % 10 != 0){
		money /= 10;
		money += 1;
		money *= 10;
	}
	if (money % 100 != 0){
		money /= 100;
		money += 1;
		money *= 100;
	}
	if (money % 1000 != 0){
		money /= 1000;
		money += 1;
		money *= 1000;
	}
	if (money % 10000 != 0){
		money /= 10000;
		money += 1;
		money *= 10000;
	}
	printf("%d\n", money);

	return 0;
}