#include <stdio.h>

int main(void)
{
	int input = 0;
	int i;
	int kingaku = 100000;
	int kingaku_5;
	
	scanf("%d", &input);
	
	kingaku_5 = (kingaku / 100) * 5;
	
	for (i = 0; i < input + 1; i++){
		if (kingaku_5 > 999){
			kingaku += kingaku_5;
		}
	}
	
	printf("%d\n", kingaku);
	
	return (0);
}