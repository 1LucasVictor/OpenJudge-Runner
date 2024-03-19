#include <stdio.h>

int main(void){
	int n = 0;
	int count = 0;
	int train_stack[100];
	int out_train[100];
	int train_n;

	while (scanf("%d", &train_n) != EOF){
		if (train_n != 0){
			train_stack[count] = train_n;
			count++;
		}
		else {
			if (count != 0){
				count--;
				out_train[n] = train_stack[count];
				printf("%d\n", out_train[n]);
				n++;
			}
		}
	}

	return (0);
}