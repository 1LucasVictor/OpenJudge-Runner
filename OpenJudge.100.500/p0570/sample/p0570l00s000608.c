#include<stdio.h>
int main()
{
    int a, b, c, d, k, found=0;
    scanf("%d %d", &a, &b);
    for(k=-1000000000; k<1000000000; k++)
    {

        c=a-k;
        if(c<0)
            c=c*(-1);
        d=b-k;
        if(d<0)
            d=d*(-1);

        if(c==d)
        {
            found=1;
            break;
        }

    }
    if(found)
        printf("%d\n", k);
    else
        printf("IMPOSSIBLE\n");
}
