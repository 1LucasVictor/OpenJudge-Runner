#include <stdio.h>

int main(void)
{
	int train[100];
	int out_train[100];
	int temp_train;
	int i, j;
	
	i = j = 0;
	
	while (scanf("%d", &temp_train) != EOF){
		if (temp_train != 0){
			train[i] = temp_train;
			i++;
		}
		
		else {
			i--;
			out_train[j] = train[i];
			printf("%d\n", out_train[j]);
			j++;
		}
	}
	
	return (0);
}