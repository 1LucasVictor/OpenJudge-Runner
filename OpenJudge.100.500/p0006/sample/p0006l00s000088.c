#include <stdio.h>

#define  DEBT  100000

int main(void){
	int week,i,debt;
	
	debt = DEBT;
	
	scanf("%d", &week);
	
	for(i = 1; i <= week; i++){
		debt *= 1.05;
		
		if(debt % 1000 != 0){
			debt /= 1000;
			debt += 1;
			debt *= 1000;
		}
	}
	
	printf("%d\n", debt);
	
	return 0;
}