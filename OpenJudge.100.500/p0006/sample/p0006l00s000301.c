#include <stdio.h>

int main(void){

	int money = 100000;
	int n;
	int i;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		money += money * 0.05;	
	}
	
	if(money % 10000 >= 5){
		money /= 10000;
		money += 1;
		money *= 10000;
	}else{
		money /= 10000;
		money *= 10000;
	}
	
	printf("%d\n", money);
	
	return 0;
}