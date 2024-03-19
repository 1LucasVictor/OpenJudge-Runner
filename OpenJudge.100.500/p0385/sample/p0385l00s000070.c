#include <stdio.h>

int main(void){
	int num;
	int sum = 0;
	
	while(1){
		scanf("%d", &num);
		if(num == 0){
			return 0;
		}
		sum = 0;
		while(1){
			sum += num % 10;
			if(num / 10 == 0){
				break;
			}
			num /= 10;
		}	
		printf("%d\n", sum);
	}
	return 0;
}