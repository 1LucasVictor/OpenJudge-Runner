#include<stdio.h>

int main(){
	int n;
	int i;
	double money = 100000.0;
	double a;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		money = money*1.05;

	if ((int)money % 10000 != 0){
		a = (int)money % 10000;
		money /= 10000;
		money += 1;
		money *= 10000;
		money -= a;
	}
	printf("%d\n", (int)money);

	return 0;
}