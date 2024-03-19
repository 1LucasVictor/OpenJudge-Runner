#include <stdio.h>

int main(void){
	int n, x, i;
	int flag;

	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		x = i;
		flag = 0;

		do{
			if(x % 3 == 0){
				printf(" %d", i);
				flag = 1;
			} else if(x % 10 == 3){
				printf(" %d", i);
				flag = 1;
			}

			if(flag != 1){
				x /= 10;

				if(x == 0){
					flag = 1;
				}
			}
		}while (flag != 1);
	}

	printf("\n");

	return 0;
}