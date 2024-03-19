#include <stdio.h>

int main(void)
{
	int i;
	int num;
	int money = 100000;
	
	scanf("%d", &num);
	
	for(i=0; i<num; i++){
		money = money * 1.05;
		if((money % 1000) > 0) money = (money - (money % 1000)) + 1000;
		//
		
		
	}

	printf("%d\n", money);

	return 0;
}