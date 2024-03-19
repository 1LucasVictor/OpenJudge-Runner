#include <stdio.h>
int main()
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    if((b-a)<=x)
    {
        if(b>a)
        {
            printf("safe");
        }
        else if(b>a)
        {
            printf("delicious");
        }
        else
        {
            printf("safe");
        }
    }
    else
    {
        printf("dangerous");
    }
    return 0;
}