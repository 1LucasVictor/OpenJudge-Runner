#include <stdio.h>

int main(void){
	int i;
	int n = 0;
	int count = 0;
	int train_stack[10];
	int out_train[10];
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
				n++;
			}
		}
	}

	for (i = 0; i < n; i++){
		printf("%d\n", out_train[i]);
	}

	return (0);
}