#include<stdio.h>
#include<math.h>
int main ()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if((x+y)%2==0)
    {
        printf("%d\n",(x+y)/2);
    }
    else printf("IMPOSSIBLE\n");

    return 0;
}
