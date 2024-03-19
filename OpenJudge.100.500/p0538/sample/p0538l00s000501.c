#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,s;
    scanf("%d %d",&x,&y);
    if(x>1&&x<9||y>1&&y<9)
        s = x*y;
    else
        s = -1;
    printf("%d",s);
    return 0;
}
