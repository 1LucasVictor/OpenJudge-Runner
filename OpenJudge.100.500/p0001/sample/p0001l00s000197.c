#include <stdio.h>

int ketacount(int x, int y){
	int count = 0;
	int sum;
	int amari;

	sum = x + y;

	do{
		count++;
		//amari = sum % 10;
		sum /= 10;
	}while(sum > 0);

	return count;
}

int main(void){
	int a, b;
	int i;
	int result[3];

	for(i = 0; i < 3; i++){
		scanf("%d%d", &a, &b);
		result[i] = ketacount(a, b);
	}
	for(i = 0; i < 3; i++){
		printf("%d\n", result[i]);
	}

	return 0;
}