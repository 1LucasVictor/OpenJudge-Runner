#include <stdio.h>

int main(void)
{
	int train[10];
	int out_train[10];
	int temp_train;
	int i, j;
	int train_num;
	int pop;
	
	train_num = pop = i = j = 0;
	
	while (scanf("%d", &temp_train) != EOF){
		
		if (temp_train != 0){
			train[i] = temp_train;
			i++;
			train_num++;
		}
		
		else {
			i--;
			out_train[j] = train[i];
			printf("%d\n", out_train[j]);
			j++;
			pop++;
		}
		
		if (train_num == pop){
			break;
		}
	}
	
	return (0);
}