#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *train;
	int train_no;
	int no;
	int i;
	
	no = 0;
	train = (int *)malloc(sizeof(int));
	while (scanf("%d", &train_no) != EOF){
		if (train_no != 0){
			no++;
		}
		else {
			no--;
			printf("%d\n", train[no]);
		}
		train = (int *)realloc(train, no * sizeof(int));
		if (train_no != 0){
			train[no - 1] = train_no;
		}
	}
	free(train);
	
	return (0);
}