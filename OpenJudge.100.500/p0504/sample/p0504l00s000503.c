#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int h, a, ans;
    scanf("%d%d", &h, &a);

    if(h%a==0) ans = h/a;
    else ans = (h-h%a)/a + 1;
    printf("%d", ans);
    return 0;    
}