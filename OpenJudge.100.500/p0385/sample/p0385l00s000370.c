#include <stdio.h>

int main(void){
	int num, sum;

	while(1){
		scanf("%d", &num);
		if(num == 0){
			break;
		}
		sum = 0;
		while(num != 0){
			sum += num % 10;
			num /= 10;
		}

		printf("%d\n", sum);
	}
	return 0;
}