#include <stdio.h>

void depot(int *train, int x, int *out_train);

int main(void)
{
	int i;
	static int train[11];
	static int out_train[10];
	int array;
	while (scanf("%d", &array) != EOF){
		depot(train, array, out_train);
	}
	
	for (i = 0; i < 10; i++){
		if (out_train[i] != 0){
			printf("%d\n", out_train[i]);
		}
	}
	
	
	return (0);
}

void depot(int *train, int x, int *out_train)
{
	static int out = 0;
	int i;
	
	if (x != 0){
		for (i = 10; i > 0; i--){
			train[i] = train[i - 1];
		}
		train[1] = x;
	}
	if (x == 0){
		out_train[out] = train[1];
		out++;
		for (i = 1; i < 11; i++){
			train[i] = train[i + 1];
		}
	}
}