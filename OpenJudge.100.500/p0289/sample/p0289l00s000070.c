#include <stdio.h>
#include <stdlib.h>

static void Exchange_Void(int *pSortBuff, int insert, int key );

int main(void)
{
	int a;					/* input a */
	int b;					/* input b */
	int remainder = 1;		/* amari */
	int divide;
	int loop;
   
    /* get Data" */
    scanf("%d %d", &a, &b);
	
    while(remainder != 0)
    {
		if(a < b)
		{
			remainder = b % a;
			b = remainder;
			divide = a;
		}
		else
		{
			remainder = a % b;
			a = remainder;
			divide = b;
		}   	
    }
	printf("%d\n", divide);
	
    return 0;
}