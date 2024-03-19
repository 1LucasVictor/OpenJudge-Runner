#include <stdio.h>
#include <stdlib.h>

int main()
{
    int H,A,count=0;
    scanf("%d %d",&H,&A);
    while(H>0)
    {
        H=H-A;
        count=count+1;
    }
    printf("%d",count);
    return 0;
}
