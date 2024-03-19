#include <stdio.h>

int main()
{
    int i, j, k, h, a, count=0;
    scanf("%d %d", &h, &a);
    do{
        h -= a;
        count++;
    }while(h > 0);
    printf("%d", count);
    return 0;
}
