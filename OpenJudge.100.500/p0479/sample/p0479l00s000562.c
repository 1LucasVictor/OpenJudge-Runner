#include <stdio.h>
#include <string.h>

#define N_MAX   2*10*10*10*10*10


int main(void)
{
    int n = 0;
    int tmp = 0;
    int a[N_MAX];
    int i = 0;
    
    memset(a, 0x00, sizeof(a));
    
    scanf("%d", &n);
    
    for(i = 0; i < n -1; i++)
    {
        scanf("%d", &tmp);
        a[tmp-1]++;
    }
    
    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    
}
