#include <stdio.h>

int main(void){

	int n;
	int debt = 100000;
	int r = 0;
	int i;

	scanf("%d", &n);
	
	
	for (i = 0; i < 5; i++){
		r+=5000;
	}
	
	debt += r;

	if (debt % 10000 != 0){
		debt += 5000;
	}

	printf("%d\n", debt);

	return 0;
}