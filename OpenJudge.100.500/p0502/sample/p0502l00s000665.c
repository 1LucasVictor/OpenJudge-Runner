#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int c=1;
    while(t!=0)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        {
            if((n%3)&&(n%5))
            {
                c=0;
                break;
            }
        }
        t--;
    }
    if(c==0)
    {
       printf("DENIED");
    }
    else
    {
        printf("APPROVED");
    }

    return 0;
}
