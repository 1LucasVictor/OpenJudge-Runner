#include <stdio.h>

int main(void)
{
	int bus[11] = {0};
	int n, bush = 0;
	
	while (scanf("%d", &n), 1){
		
		if (n != 0){
			bus[bush] = n;
			bush++;
		}
		else {
			bush--;
			if (bush < 0)break;
			
			printf("%d\n", bus[bush]);
		
		}
		
	//	printf("bush=%d\n", bush);
	}
	
	return (0);
}