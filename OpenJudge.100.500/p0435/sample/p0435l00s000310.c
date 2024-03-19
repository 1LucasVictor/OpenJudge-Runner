#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n,d,x,y,cnt=0;
    long long int d_str,ans;
    scanf("%d %d",&n,&d);
    while(n--)
    {
        scanf("%d %d",&x,&y);
        d_str=llabs(d)*llabs(d);
        ans=(llabs(x)*llabs(x))+(llabs(y)*llabs(y));
        if(ans<=d_str)
            cnt++;
    }
    printf("%d",cnt);
    return 0;
}
