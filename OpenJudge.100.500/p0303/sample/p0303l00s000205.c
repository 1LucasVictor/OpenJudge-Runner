#include <stdio.h>
#include <stdlib.h>

#define MAX_LUGGAGE_NUM    100000
#define MAX_TRUCK_NUM      100000

static int BinarySearch(int *weight_buff, int luggage_num, int truck_num, int mid);		/* set luggage in track */

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
    int left = 0;
	int right;
	int mid;
	int sum = 0;
	int ans;				/* left or right side next value */
	int luggage_num;		/* luggage num */
	int truck_num;			/* truck num */
	int *weight_buff;		/* luggage weight buffer */
	int loop = 0;
	
	scanf("%d %d", &luggage_num, &truck_num);			/* get luggage num and truck num */
	
	if((luggage_num <= MAX_LUGGAGE_NUM)					/* If luggage num is within max luggage num */
		&& (truck_num <= MAX_TRUCK_NUM))
	{
		weight_buff = (int*)malloc(luggage_num * sizeof(int));							/* malloc buffer size*/
		
		while(((scanf("%d", &(weight_buff[loop]))) != EOF) && (loop < luggage_num))		/* get weight data */
		{
			sum += weight_buff[loop];													/* get all sum data */
			loop++;
		}
		right = sum;																	/* set max value right side*/ 
		
		while(right - left > 1)															/* search best answer with small diff */
		{
	        mid = (right + left) / 2;													/* calcuration middle value */
			ans = BinarySearch(weight_buff, luggage_num, truck_num, mid);				/* find better value */
	        if(ans >= luggage_num)
			{
	            right = mid;		/* max value is more little value than middle */
			}
			else
			{
	            left = mid;			/* max value is more big value than middle */
			}
		}
    }
    printf("%d\n",right);	/* output result */
	
	free(weight_buff);		/* free process */
	
    return 0;
}

/***********************************************************************************
 ++module <BinarySearch>
 ++outline
	set luggage in track
 ++arguments
	<int>			<*weight_buff>					[weight buffer point]
	<int>			<luggage_num>					[common load num]
	<int>			<truck_num>						[truck num]
	<int>			<mid>							[middle value]
 ++supp
 	<return>
	  weight_point     :truck in luggage num 
 ++end_module
************************************************************************************/
static int BinarySearch(int *weight_buff, int luggage_num, int truck_num, int mid)
{
	int sum;				/* sum load value */
	int weight_point = 0;	/* luggage set point */ 
	int loop;
	
	for(loop = 0; loop < truck_num; loop++ )			/* loop all track set luggage */
	{
		sum = 0;
		while((sum + weight_buff[weight_point] <= mid)	/*  while little than average value */
			&& (weight_point < luggage_num))			
		{
			sum += weight_buff[weight_point];			/* sum track weight */
			weight_point++;								/* set next weight */
		}
		if(weight_point == luggage_num)					/*  if luggage is all in track */
		{
			break;
		}
	}
	return weight_point;   								 /* truck in luggage num */
}

