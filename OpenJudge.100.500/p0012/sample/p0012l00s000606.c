#include <stdio.h>

int main(void)
{
	int train[100];
	int temp;
	int i, j;
	
	i = 0;
	while (scanf("%d", &temp) != EOF){
		if (temp != 0){
			train[i] = temp;
			i++;
		}
		else {
			printf("%d\n", train[i - 1]);
			i--;
		}
	}
	
	return (0);
}