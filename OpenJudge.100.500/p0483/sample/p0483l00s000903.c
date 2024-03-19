#include<stdio.h>
int main()
{
    int num, rem;
    scanf("%d", &num);


    while(rem!=0)
    {
        rem  = num % 10;

        if(rem == 7)
        {
            printf("Yes\n");
            break;
            goto x;
        }
        else
        {
            printf("No\n");
            break;
        }
        num = num/10;

    }

    x: return 0;
}
