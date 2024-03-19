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
        else if(a>b)
        {
            printf("delicious");
        }
    }
    else if((b-a)>x && x!=(b-a))
    {
        printf("dangerous");
    }
    return 0;
}
