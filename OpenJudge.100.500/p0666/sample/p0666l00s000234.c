#include <stdio.h>
int main()
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    if((b-a)<=x)
    {
        if(b>a || a==b)
        {
            printf("safe");
        }
        else
        {
            printf("delicious");
        }
    }
    else
    {
        printf("dangerous");
    }
    return 0;
}
