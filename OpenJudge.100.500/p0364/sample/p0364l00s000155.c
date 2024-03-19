#include<stdio.h>

int main(void)
{
    int w, h, x, y, r;
    while(1)
    {
        char buffer[256];
        fgets(buffer, 256, stdin);
        sscanf(buffer, "%d %d %d %d %d", &w, &h, &x, &y, &r);
        if((x >= -100 && x <= 100) &&
        (y >= -100 && y <= 100)&&
        (w > 0 && w <= 100)&&
        (h > 0 && h <= 100)&&
        (r > 0 && r <= 100)) break;
        
    }
    if((x + r <= w)&& (x - r >= 0) &&
    (y + r <= h)&& (y - r >= 0)) printf("Yes\n");
    else printf("No\n");
    
    
    return(0);
}
