#include<stdio.h>
int main()
{
    int n,r;

    scanf("%d",&n);

    if(n<=9)
    {
            if((n==2)||(n==4)||(n==5)||(n==7)||(n==9))
        {
            printf("hon\n");
        }

        if((n==0)||(n==1)||(n==6)||(n==8))
        {
            printf("pon\n");
        }

        if(n==3)
        {
            printf("bon\n");
        }
    }

    if(n>9)

    {
        r=n%10;

        if((r==2)||(r==4)||(r==5)||(r==7)||(r==9))
        {
            printf("hon\n");
        }

        if((r==0)||(r==1)||(r==6)||(r==8))
        {
            printf("pon\n");
        }

        if(r==3)
        {
            printf("bon\n");
        }
    }
    return 0;
}
