#include <stdio.h>

int main(){
	int n,i;
	long long int money;

	scanf("%d",&n);

	money = 100000;

	for(i = 0;i < n;i++){
		money *= 105;
		money /= 100;
		money += 999;
		money /= 1000;
		money *= 1000;
	}

	printf("%ld\n",money);

	return 0;
}