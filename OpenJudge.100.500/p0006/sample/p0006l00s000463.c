#include <stdio.h>

int main(void)
{
	int input;
	int i;
	int kingaku = 100000;

	scanf("%d", &input);
	
	for (i = 0; i <= input; i++){
		kingaku += 5000;
	}
	
	printf("%d\n", kingaku);
	
	return (0);
}