#include <stdio.h>
#include <stdlib.h>

#define MAX_DATA_NUM      500000
#define HALF_MAX_DATA_NUM (MAX_DATA_NUM/2)

static void Merge_Void(int *pSortBuff, int LeftNum, int RightNum );

int main(void)
{
    int data_num;			/* Data Num */
	int db;					/* Data Block */
	int cn = 2;				/* Compare Num */
	int mn = 0;				/* merge num */
	int half = 1;			/* Compare Half Num */
	int pSortBuff[10] = {5, 8, 9, 2, 6, 3, 7, 1, 10, 4};
	int remainder;          /* amari */
	int section;
	int position;
	int loop;
	int i;
    
//    /* get "Data Block Num" */
//    scanf("%d", &db);
//    pSortBuff = (int *)malloc(sizeof(int) * db);
//     
//    /* get Name & time */
//    while((scanf("%d", &(pSortBuff[data_num])) != EOF) && data_num < db)
//    {
//        data_num++;
//    }
    data_num = 10;
	db = 10;
	section = 10;
	
    /* get Data Num equal process num */
    if( data_num == db )
    {
         while(section > 1)
        {
        	position = 0;
    		section = db / cn;
		   	remainder = data_num % cn;
        	
        	for(loop=0; loop<section; loop++)
        	{
        		Merge_Void(&(pSortBuff[position]), half, half);
        		position += cn;
        		mn += cn;
        	}
        	if(remainder > half)
        	{
        		Merge_Void(&(pSortBuff[position]), half, (remainder - half));
        		mn += remainder;
        	}
        	
        	half = cn;
        	cn *= 2; /* double compare num */
        }
    	
    	if(remainder > 0)
    	{
    		Merge_Void(&(pSortBuff[0]), half, remainder);
    		mn += half;
    	}
    }
    else
    {
        /* error input */
    }
	
	for(loop=0; loop<data_num-1; loop++)
	{
		printf("%d ", pSortBuff[loop]);
	}
	printf("%d\n%d\n", pSortBuff[data_num-1], mn);
	
//	free(pSortBuff);
    return 0;
}

void Merge_Void(int *pSortBuff, int LeftNum, int RightNum )
{
	int loop;
	int ln = 0;
	int rn = 0;
    int *pLeftBuff;
    int *pRightBuff;
	
	
    pLeftBuff = (int *)malloc(sizeof(int) * LeftNum);
    pRightBuff = (int *)malloc(sizeof(int) * RightNum);
	
	/* Input Left Buffer */
	for( loop=0; loop<LeftNum; loop++ )
	{
		pLeftBuff[loop] = pSortBuff[loop];
	}
	
	/* Input Right Buffer */
	for( loop=0; loop<RightNum; loop++ )
	{
		pRightBuff[loop] = pSortBuff[LeftNum + loop];
	}
	
	/* merge */
	for( loop=0; loop<(LeftNum + RightNum); loop++ )
	{
		if(ln == LeftNum)
		{
			pSortBuff[loop] = pRightBuff[rn];
			rn++;
		}
		else if(rn == RightNum)
		{
			pSortBuff[loop] = pLeftBuff[ln];
			ln++;
		}
		else if(pRightBuff[rn] < pLeftBuff[ln])
		{
			pSortBuff[loop] = pRightBuff[rn];
			rn++;
		}
		else
		{
			pSortBuff[loop] = pLeftBuff[ln];
			ln++;
		}
	}
	
	free(pLeftBuff);
	free(pRightBuff);
}