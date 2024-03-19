#include <stdio.h>

int main(void)
{
	int num;
	int i;
	int cars[10];
	
	for (i = 0; i < 10; i++){
		cars[i] = 0;
	}
	
	while (scanf("%d", &num) == 1){
		if (num != 0){
			for (i = 0; i < 10; i++){
				if (cars[i] == 0){
					cars[i] = num;
					break;
				}
			}
		}
		else {
			for (i = 9; i >= 0; i--){
				if (cars[i] != 0){
					printf("%d\n", cars[i]);
					cars[i] = 0;
					break;
				}
			}
		}
	}
	return (0);
}