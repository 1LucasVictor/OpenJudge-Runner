#include <stdio.h>
#include <stdlib.h>

#define MAX_LUGGAGE_NUM    100000
#define MAX_TRUCK_NUM      100000

static int BinarySearch(int *weight_buff, int luggage_num, int truck_num, int mid);

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
	int ans;
	int luggage_num;		/* luggage num */
	int truck_num;			/* truck num */
	int *weight_buff;		/* luggage weight buffer */
	int loop = 0;
	
	scanf("%d %d", &luggage_num, &truck_num);			/* get luggage num and truck num */
	
	if((luggage_num <= MAX_LUGGAGE_NUM)					/* If luggage num is within max luggage num */
		&& (truck_num <= MAX_TRUCK_NUM))
	{
		weight_buff = (int*)malloc(luggage_num * sizeof(int));
		
		while(((scanf("%d", &(weight_buff[loop]))) != EOF) && (loop < luggage_num))
		{
			sum += weight_buff[loop];
			loop++;
		}
		right = sum;
		
		while(right - left > 1)
		{
	        mid = (right + left) / 2;
			ans = BinarySearch(weight_buff, luggage_num, truck_num, mid);
	        if(ans >= luggage_num)
			{
	            right = mid;
			}
			else
			{
	            left = mid;
			}
		}
    }
    printf("%d\n",right);
	
    return 0;
}

static int BinarySearch(int *weight_buff, int luggage_num, int truck_num, int mid)
{
	int sum;
	int weight_point = 0;
	int loop;
	
	for(loop = 0; loop < truck_num; loop++ )
	{
		sum = 0;
		while((sum + weight_buff[weight_point] <= mid)
			&& (weight_point < luggage_num))
		{
			sum += weight_buff[weight_point];
			weight_point++;
		}
		if(weight_point == luggage_num)
		{
			break;
		}
	}
	return weight_point;
}
