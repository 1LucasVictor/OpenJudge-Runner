#include<stdio.h>
#include<stdlib.h>

#define RISI 1.05

int main(void)
{

        int debt = 100000;
        int i=0;
        int n = 0, kiriage = 0;
        scanf("%d",&n);

        for(i = 0; i < n; i++)
        {
                debt = debt * RISI;
        }


        if(debt%10000 != 0)
        {
                kiriage = debt / 10000;
                kiriage = kiriage*10000;
                kiriage += 10000;
        }
        else
        {
                kiriage = debt;
        }

        printf("%d\n",kiriage);


        return 0;
}