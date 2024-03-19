#include <stdio.h>
#include <stdlib.h>

#define MAX_LUGGAGE_NUM    100000
#define MAX_TRUCK_NUM      100000
#define FINISH_MIN_NUM     1

#define OFF             0
#define ON              1
#define ELEMENT_OFFSET  1

typedef struct ST_QUICK_SORT_RANGE QuickSortRange_t;

typedef struct ST_QUICK_SORT_RANGE{
	int left;		/* left end */
	int right;		/* right end */
} QUICK_SORT_RANGE;

static void QuickSort(int *weight_buff, int luggage_num);
static void QuickSwap(int *weight_buff, int pivot, int swap_point);

/***********************************************************************************
 ++module <main>
 ++outline
	main function
 ++arguments
	<>			<>					[]
 ++supp
 	<return>
 	  nothing
 ++end_module
************************************************************************************/
int main(void)
{
	int luggage_num;		/* luggage num */
	int truck_num;			/* truck num */
	int sum = 0;			/* sum value all luggage weight */
	int ave;				/* average value each truck luggage weight */
	int *weight_buff;		/* luggage weight buffer */
	int *truck_buff;		/* truck weight buffer */
	int truck_point;
	int truck_max = 0;
	int reply_count = 0;
	int temp;
	int loop = 0;
	
	scanf("%d %d", &luggage_num, &truck_num);			/* get luggage num and truck num */
	
	if((luggage_num <= MAX_LUGGAGE_NUM)					/* If luggage num is within max luggage num */
		&& (truck_num <= MAX_TRUCK_NUM))
	{
		weight_buff = (int*)malloc(luggage_num * sizeof(int));
		truck_buff  = (int*)malloc(truck_num * sizeof(int));
		
		while(((scanf("%d", &(weight_buff[loop]))) != EOF) && (loop < luggage_num))
		{
			sum += weight_buff[loop];
			loop++;
		}
		
		ave = (sum / truck_num) + 1;
		
//		QuickSort(weight_buff, luggage_num);
		
		
//		for(loop=0;loop<luggage_num;loop++)
//		{
//			printf("%d ", weight_buff[loop]);
//		}
//		printf("\n");
		while(reply_count < 2)
		{
			truck_point = 0;
			truck_max = 0;
			for(loop=0;loop<truck_num;loop++)
			{
				truck_buff[loop] = 0;
			}
			
			for(loop = 0; loop < luggage_num; loop++)
			{
				while(truck_point < truck_num)
				{
					temp = truck_buff[truck_point] + weight_buff[loop];
					if(temp <= ave)
					{
						truck_buff[truck_point] += weight_buff[loop];
						
						if(truck_buff[truck_max] < truck_buff[truck_point])
						{
							truck_max = truck_point;
						}
						else
						{
							/* nothing */
						}
						break;
					}
					else
					{
						truck_point++;
					}
				}
				if(truck_point == truck_num)
				{
					truck_buff[truck_num-1] += weight_buff[loop];
					
					if(truck_buff[truck_max] < truck_buff[truck_num-1])
					{
						truck_max = truck_num-1;
					}
					else
					{
						/* nothing */
					}
				}
			}
			
			if(truck_buff[truck_max] - ave <= 1)
			{
				break;
			}
			else
			{
				ave += 1;
				reply_count++;
			}
		}
		printf("%d\n", truck_buff[truck_max]);		/* output result */
	}
	else
	{
		/* error luggage num or truck num */
	}
	
    return 0;
}

static void QuickSort(int *weight_buff, int luggage_num)
{
	int pivot_point;
	int pivot_value;
	int pointer_num = 0;
	int offset_point;
	int loop;
	int swap;
	int count = 0;
	QuickSortRange_t *range_pointer[MAX_LUGGAGE_NUM/2];
	
	
	range_pointer[pointer_num] = (QuickSortRange_t*)malloc(sizeof(QuickSortRange_t));
	range_pointer[pointer_num]->left = 0;
	range_pointer[pointer_num]->right = luggage_num - ELEMENT_OFFSET;
	pointer_num++;
	
	while(pointer_num > 0)
	{
		offset_point = pointer_num - ELEMENT_OFFSET;
		pivot_point = range_pointer[offset_point]->left;
		pivot_value = weight_buff[pivot_point];
		
		for(loop = (range_pointer[offset_point]->left) + 1; loop <= (range_pointer[offset_point]->right); loop++)
		{
			if(pivot_value < weight_buff[loop])
			{
				QuickSwap(weight_buff, pivot_point, loop);
				pivot_point++;
			}
			else
			{
				/* nothing */
			}
		}
		
		if((pivot_point - range_pointer[offset_point]->left) > FINISH_MIN_NUM)
		{
			
			if(range_pointer[offset_point]->right - pivot_point > FINISH_MIN_NUM)
			{
				swap = range_pointer[offset_point]->right;
				range_pointer[offset_point]->right = pivot_point - 1;
				offset_point++;
				
				range_pointer[offset_point] = (QuickSortRange_t*)malloc(sizeof(QuickSortRange_t));
				range_pointer[offset_point]->left = pivot_point + 1;
				range_pointer[offset_point]->right = swap;
				pointer_num++;
			}
			else
			{
				range_pointer[offset_point]->right = pivot_point - 1;
			}
		}
		else if(range_pointer[offset_point]->right - pivot_point > FINISH_MIN_NUM)
		{
			range_pointer[offset_point]->left = pivot_point + 1;
		}
		else
		{
			free(range_pointer[offset_point]);
			range_pointer[offset_point] = NULL;
			pointer_num--;
		}
	}
	
}

static void QuickSwap(int *weight_buff, int pivot, int swap_point)
{
	int swap = weight_buff[swap_point];
	int loop;
	
	for(loop = swap_point; loop > pivot; loop--)
	{
		weight_buff[loop] = weight_buff[loop-1];
	}
	
	weight_buff[pivot] = swap;
}

