#include <stdio.h>

int main(void){

	int n[6] = { 5,7,1,99,1000,999 };
	int sum1 = 0, sum2 = 0, sum3 = 0;
	int digit1 = 0, digit2 = 0, digit3 = 0;
	int i = 0;


	sum1 = n[0] + n[1];
	sum2 = n[2] + n[3];
	sum3 = n[4] + n[5];

	while (sum1 != 0){
		sum1 = sum1 / 10;
		++digit1;
	}

	while (sum2 != 0){
		sum2 = sum2 / 10;
		++digit2;
	}

	while (sum3 != 0){
		sum3 = sum3 / 10;
		++digit3;
	}
	
	printf("%d\n%d\n%d\n", digit1, digit2, digit3);

	return 0;
}