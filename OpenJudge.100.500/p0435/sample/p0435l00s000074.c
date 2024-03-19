#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int d,n,c=0;
    scanf("%d %d",&n,&d);
    for(int i=0;i<n;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if((x*x+y*y)<=d*d)
            c++;
    }
    printf("%d",c);

}
