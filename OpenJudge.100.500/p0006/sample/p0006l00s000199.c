#include<stdio.h>
#include<stdlib.h>

#define RISI 1.05

int main(void)
{

        double debt = 100000;
        int i=0;
        int n = 0;
        double kiriage = 0;
        scanf("%d",&n);

        for(i = 0; i < n; i++)
        {
                debt = debt * RISI;
        }


        if((int)debt % (int)10000 == 0.0)
        {
                kiriage = debt;
        }
        else
        {
                kiriage = (int)debt / (int)10000;
                kiriage = kiriage*10000;
                kiriage += 10000;
        }

        printf("%0.0f\n",kiriage);


        return 0;
}