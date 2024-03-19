#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int num;
    char sign;
}Card;
void bubblesort(int number, Card card[number]);
int main(int argc, char** argv) {
    int number;
    int readScan = scanf("%d", &number);
    Card card[number];
    for(int i = 0; i< number; i++)
    {
        {
            int reaScan = scanf( " %c%d", &card[i].sign, &card[i].num);
        }
    }
    bubblesort(number, card);

    Card card2[number];
    for(int i=0; i< number; i++)
    {
        card2[i].num = card[i].num;
        card2[i].sign = card[i].sign;
    }
    for(int i= 0; i< number; i++)
    {    
        if(i<number-1)
        {
            printf("%c%d ", card2[i].sign,card2[i].num);
        }
        if(i==number-1)
        {
            printf("%c%d\n", card2[i].sign,card2[i].num);
        }
    }
        printf("Stable\n");
        
    int b,v;
    char mark;
    int q = 0;
    int min ;
    for (int i = 0; i < number-1; i++)
    {   
        min = i;
        v = number;
        for (int j = i; j < number-1; j++)
	{   if(card2[j].num == card2[i].num)
            {
                 v = j;
            }
            if (card[j].num <= card[min].num)
            { 
                min = j;
                if(v < min)
                {
                   q=1;
                }
            }  
        }  
        b= card[i].num;
        mark = card[i].sign;
        card[i].num=card[min].num;
        card[i].sign= card[min].sign;
        card[min].num=b;
        card[min].sign=mark;
    }
    for(int i= 0; i< number; i++)
    {    
        if(i<number-1)
        {
           printf("%c%d ",card[i].sign ,card[i].num);
        }
        if(i==number-1)
        {
           printf("%c%d\n",card[i].sign, card[i].num);
        }
    }
    
    int right=0;
    for(int i=0; i<number;i++)
    {
        if(card[i].sign != card2[i].sign)
        {
            right =1;
        }
    }
    if(right == 0)
    {
        printf("Stable\n");
    }
    
    if(right == 1)
    {
        printf("Not stable\n");
    }
    return (EXIT_SUCCESS);
}

void bubblesort(int number, Card *card)
{
    int c;
    char mark0;
    for (int i = 0; i < number; i++)
    {
	for (int j = 0; j < number-i-1; j++)
	{
        if (card[j].num>card[j+1].num)
	{
            c = card[j].num ;
            mark0 = card[j].sign;
            card[j].num = card[j+1].num;
            card[j].sign = card[j+1].sign;
            card[j+1].num =c;
            card[j+1].sign = mark0;			
        }
	}
    }
}

