#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#define DEBUG 1
#define TRAIN_NUMBER 30
 
int push(int array[TRAIN_NUMBER], int num, int count);
int pop(int array[TRAIN_NUMBER], int ans[TRAIN_NUMBER], int count, int *ans_c);

main()
{
	int train[TRAIN_NUMBER];
	int ans[TRAIN_NUMBER];
	int count = 0;
	int ans_c = 0;
	int input;
	int i;
	
	for(i = 0; i < TRAIN_NUMBER; i++)
	{
		train[i] = '\0';
		ans[i] = '\0';
	}	
	while (scanf("%d", &input) != EOF)
	{	
		
		if(input != 0)
		{
			count = push(train, input, count);
		}
		else
		{
			count = pop(train, ans, count, &ans_c);
		}
	}
	
	for(i = 0; i < ans_c; i++)
	{
		printf("%d\n",ans[i]);
	}

	return 0;
}

int push(int array[TRAIN_NUMBER], int num, int count)
{
	
	array[count] = num;
#ifdef DEBUG
	printf("array: %d\n", count);
#endif
	return ++count;
	
}

int pop(int array[TRAIN_NUMBER], int ans[TRAIN_NUMBER], int count, int *ans_c)
{
	count--;
	ans[*ans_c] = array[count];
	*ans_c = *ans_c + 1;
	return count;

}