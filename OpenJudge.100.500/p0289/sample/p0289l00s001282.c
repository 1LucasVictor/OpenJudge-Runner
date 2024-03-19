#include"stdio.h"

int main()
{
    int a,b;
    int num;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        num=a;
        a=b;
        b=num;
    }
    while(1)
    {
        num=a%b;
        if(num==0)
        {
            printf("%d\n",b);
            break;
        }
        else
        {
            a=b;
            b=num;
        }
    }
    return 0;
}
