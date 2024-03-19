#include <stdio.h>

int main(void)
{
	int n;
	int temp;
	int i;
	int MONEY;
	
	MONEY = 100000;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		temp = MONEY * 0.05;
		MONEY += temp;
		if (MONEY % 1000 > 0){
			temp = MONEY % 1000;
			MONEY -= temp;
			MONEY += 1000;
		}
	}
	
	printf("%d\n", MONEY);
	
	return 0;
}