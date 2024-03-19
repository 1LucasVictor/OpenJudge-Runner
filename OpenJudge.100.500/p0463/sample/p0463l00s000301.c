#include<stdio.h>
int main()
{
    int n,q;
    scanf("%d",&n);
    if(n<10)
    {
        if(n==2 || n==4 || n==5 || n==7 || n==9)
        {
            printf("hon\n");
        }
        else if(n==0 || n==1 || n==6 || n==8)
        {
            printf("pon\n");
        }
        else if(n==3)
        {
            printf("bon\n");
        }
    }
    else if(n>=10 && n<100)
    {
        q=n%10;
        if(q==2 || q==4 || q==5 || q==7 || q==9)
        {
            printf("hon\n");
        }
        else if(q==0 || q==1 || q==6 || q==8)
        {
            printf("pon\n");
        }
        else if(q==3)
        {
            printf("bon\n");
        }
    }
    else if(n>=100 && n<1000)
    {
        q=n%100;
       if(q>=10 && q<100)
        {
            q=q%10;
            if(q==2 || q==4 || q==5 || q==7 || q==9)
            {
                printf("hon\n");
            }
            else if(q==0 || q==1 || q==6 || q==8)
            {
                printf("pon\n");
            }
            else if(q==3)
            {
                printf("bon\n");
            }
        }
    }
}
