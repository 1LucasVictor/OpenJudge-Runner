#include <stdio.h>
#include <stdlib.h>

#define MAX_LUGGAGE_NUM    100000
#define MAX_TRUCK_NUM      100000

#define OK                 0
#define NG                 1

static int LoadDetermination_int(int *weight_buff, int luggage_num, int truck_num, int thre);		/* Try putting the luggage on the truck */

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
    int small = 0;
	int big = 0;
	int thre;
	int ans;				/* result try putting the luggage on the truck */
	int luggage_num;		/* luggage num */
	int truck_num;			/* truck num */
	int *weight_buff;		/* luggage weight buffer */
	int loop = 0;
	
	scanf("%d %d", &luggage_num, &truck_num);			/* get luggage num and truck num */
	
	if((luggage_num <= (int)MAX_LUGGAGE_NUM)					/* If luggage num is within max luggage num */
		&& (truck_num <= (int)MAX_TRUCK_NUM))
	{
		weight_buff = (int*)malloc(luggage_num * sizeof(int));							/* malloc buffer size*/
		
		while(((scanf("%d", &(weight_buff[loop]))) != EOF) && (loop < luggage_num))		/* get weight data */
		{
			big += weight_buff[loop];													/* get all sum data */
			loop++;
		}
		
		while((big - small) > 1)														/* search best answer with small diff */
		{
	        thre = (big + small) / 2;													/* calcuration threshold value */
			ans = LoadDetermination_int(weight_buff, luggage_num, truck_num, thre);			/* Try putting the luggage on the truck */
	        if(ans == (int)OK)
			{
	            big = thre;			/* max value is smaller value than threshold */
			}
			else
			{
	            small = thre;		/* max value is bigger value than threshold */
			}
		}
		free(weight_buff);		/* free process */
    }
	else
	{
		/* error input */
	}
    printf("%d\n", big);	/* output result */
	
	
    return 0;
}

/***********************************************************************************
 ++module <LoadDetermination_int>
 ++outline
	Try putting the luggage on the truck
 ++arguments
	<int>			<*weight_buff>					[weight buffer point]
	<int>			<luggage_num>					[common load num]
	<int>			<truck_num>						[truck num]
	<int>			<thre>							[threshold value]
 ++supp
 	<return>
	  OK     :Success all luggage on the truck 
	  NG     :Luggage Overflow
 ++end_module
************************************************************************************/
static int LoadDetermination_int(int *weight_buff, int luggage_num, int truck_num, int thre)
{
	int sum;				/* sum load value */
	int weight_point = 0;	/* luggage set point */
	int ret = NG;
	int loop;
	
	for(loop = 0; loop < truck_num; loop++ )				/* loop all track set luggage */
	{
		sum = 0;
		while(((sum + weight_buff[weight_point]) <= thre)	/*  while little than average value */
			&& (weight_point < luggage_num))			
		{
			sum += weight_buff[weight_point];				/* sum truck weight */
			weight_point++;									/* set next weight */
		}
		if(weight_point == luggage_num)						/*  if luggage is all on the truck */
		{
			ret = OK;										/* Success */
			break;
		}
		else
		{
			/* nothing */
		}
	}
	return ret;   											 /* judge all luggage on the truck */
}

