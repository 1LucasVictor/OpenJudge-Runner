#include <stdio.h>

int main(void)
{
    int X;
    int ans;
    
    scanf("%d", &X);
    
    ans = (X / 500) * 1000 + (X % 500 / 5) * 5;
    
    printf("%d\n", ans);
    
    return 0;
}
