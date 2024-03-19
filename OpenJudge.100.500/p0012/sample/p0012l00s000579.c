#include <stdio.h>

int main(void)
{
	int cars[10];
	int num = 0, cars_top = 0;
	
	while(scanf("%d", &num) != EOF){
		
		if(num != 0){					//push
			cars[cars_top] = num;
			cars_top++;
		}
		else if(num == 0){				//pop
			cars_top--;
			num = cars[cars_top];
			printf("%d\n", num);
		}
	}
	
	return 0;
}