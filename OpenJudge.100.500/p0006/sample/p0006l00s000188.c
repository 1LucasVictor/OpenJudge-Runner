#include <stdio.h>

int main(void)
{
    int s = 100000;
    int n, i;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        s = (int)((s * 1.05 + 999) / 1000) * 1000;
    }
    
    printf("%d\n", s);
    
    return 0;
}