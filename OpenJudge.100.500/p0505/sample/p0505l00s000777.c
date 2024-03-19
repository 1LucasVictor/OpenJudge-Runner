#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i,a[10000],sum=0;
    scanf("%d%d\n",&x,&y);
    for(i=0;i<y;i++)
        scanf("%d",&a[i]);
    for(i=0;i<y;i++)
    {
        sum+=a[i];
    }
    if(sum>x)
            printf("Yes");
        else
            printf("No");
    return 0;
}
