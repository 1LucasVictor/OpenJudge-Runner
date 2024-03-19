#include<stdio.h>
#include<stdlib.h>

#define RISI 1.05

int main(void)
{

        double debt = 100000;
        int i = 0;
        int n = 0;
        double kiriage = 0;
        int ans=0;

        scanf("%d",&n);

        for(i = 0; i < n; i++)
        {
                debt = debt * RISI;
                if((int)debt%1000 != 0)
                {
                        kiriage = debt / 1000;
                        kiriage = (int)kiriage*1000;
                        debt = kiriage + 1000;
                }

        }

        printf("%0.0f\n",debt);


        return 0;
}