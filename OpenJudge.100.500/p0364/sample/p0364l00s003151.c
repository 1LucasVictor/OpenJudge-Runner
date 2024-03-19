#include <stdio.h>

int     main(void)
{
    int rect_w;
    int rect_h;
    int x;
    int y;
    int r;
    
    scanf("%d %d %d %d %d",&rect_w,&rect_h,&x,&y,&r);
    if (x >= r && x + r <= rect_w && y >= r && y + r <= rect_h)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return (0);
}
