#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,d,x,y,cnt=0;
    double ans;
    scanf("%d %d",&n,&d);
    while(n--)
    {
        scanf("%d %d",&x,&y);
        ans=sqrt(x*x+y*y);
        if(ans<=d)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}
