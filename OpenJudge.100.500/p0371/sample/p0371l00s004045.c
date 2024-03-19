#include<stdio.h>

int main(void){
	int i, j;
	int num;
	int mini, max, sum;
	int array[10000];

	scanf("%d", &num);

	for(i = 0; i < num; i++){
		scanf("%d", &array[i]);
	}

	mini = array[0];
	max = array[0];
	sum = 0;
	for(j = 0; j < num; j++){
		if(mini > array[j]){
			mini = array[j];
		}

		if(max < array[j]){
			max = array[j];
		}

		sum = sum + array[j];
	}

	printf("%d %d %d\n", mini, max, sum);

	return 0;
}