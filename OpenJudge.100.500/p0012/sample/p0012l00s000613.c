#include <stdio.h>

int main(void)
{
	int i;
	int station[10];
	int input_data;
	
	i = 0;
	
	while (scanf("%d", &input_data) != EOF){
		if (input_data != 0){
			station[i] = input_data;
			i++;
		}
		else {
			printf("%d\n", station[i - 1]);
			i--;
		}
	}
	
	return (0);
}