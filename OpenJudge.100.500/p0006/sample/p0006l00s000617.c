#include <stdio.h>

int main(void){
	long debt = 100000;
	double interest = 0.05;
	int n, i;

	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		debt = debt * (1 + 0.05);
		if(debt % 1000 > 0){
			debt = (debt - (debt % 1000)) + 1000;
		}
	}

	printf("%ld\n", debt);

}