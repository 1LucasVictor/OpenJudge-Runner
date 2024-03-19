#include <stdio.h>

int main(void)
{
        int W,H,x,y,r;

        scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);


        if((r > x || r > y)||(r > (W - x) || r > (H - y)))
        {
                printf("No\n");
        }
        else
        {
                printf("Yes\n");
        }
        return 0;
}