#include<stdio.h>

int main(){
	int n;
	int i;
	double money = 100000.0;
	double a;

	scanf("%d", &n);

	for (i = 1; i <= n; i++){
		money = money*1.05;
		a = (int)money % 1000;
		if (a != 0){
			money += 1000;
			money -= a;
		}
	}

	printf("%d\n", (int)money);

	return 0;
}