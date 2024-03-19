#include <stdio.h>
int main()
{
    long int n,d,ct=0;
    scanf("%ld%ld",&n,&d);
    d*=d;
    long int i,x,y;
    for(i=0;i<n;i++)
    {
        scanf("%ld%ld",&x,&y);
        x*=x;
        y*=y;
        if(x+y<=d) ct++;
    }
    printf("%ld",ct);
    return 0;
}
