#include<stdio.h>

int main(void)
{
    int x, y; scanf("%d %d", &x, &y);
    int tmp;
    
    while ( y != 0) { /* (x, y) を (y, x%y) で置き換える．y=0 になるまで */
        tmp = y;
        y = x%y;
        x = tmp;
    }
    printf("%d\n", x);
    
    return 0;
}
