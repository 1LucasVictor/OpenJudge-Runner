#include <stdio.h>

int calc_digit(int);

int main(){
	int a,b;

	while(1){
		if(scanf("%d %d" ,&a,&b) == EOF){
			break;
		}
		printf("%d\n",calc_digit(a+b));
	}

	return 0;
}

int calc_digit(int num){
	int digit=0;

	while(1){
		num /= 10;
		digit++;
		if(num == 0){
			break;
		}
	}

	return digit;
}