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
            printf("Yes");
            break;
        }
        else
        {
            printf("No");
            break;
        }
        num = num/10;

    }
    return 0;
}
