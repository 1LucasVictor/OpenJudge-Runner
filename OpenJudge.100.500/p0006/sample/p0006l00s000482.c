#include<stdio.h>

int main(){
	int amount;
	int days = 0;
	int i;

	amount = 100000;

	scanf("%d",&days);

	for(i=0; i<days; i++){
		amount = amount * 1.05 + 999;
		amount = amount / 1000;
		amount = amount * 1000;
	}

	printf("%d\n",amount);

	return 0;
}