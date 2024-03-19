#include <stdio.h>
#include <stdlib.h>

int main()
{

    int c=0,n,r;
    scanf("%d",&n);
    for(;n>0;n/=10)
    {
        r=n%10;
        if(r==1)
            c++;
    }
printf("%d",c);
    return 0;
}
