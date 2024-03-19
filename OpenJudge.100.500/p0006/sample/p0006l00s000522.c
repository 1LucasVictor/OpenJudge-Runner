#include <stdio.h>

int interest(int debt);

int main(void){
	int n, i, debt = 100000;
	scanf("%d", &n);

	for(i = 0;i < n;i++){
		debt = interest(debt);
	}

	printf("%d\n", debt);

	return 0;
}

int interest(int debt){
	debt *= 1.05;
	if(debt % 1000 != 0){
		debt += 1000;
	}
	debt = debt / 1000 * 1000;

	return debt;
}