#include <stdio.h>
#define N 10000
int main()
{
    int na, nb, a[N], b[N], i, j, k = 0;
    scanf("%d", &na);

    for(i = 0; i < na; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &nb);

    for(i = 0; i < nb; i++) {
        scanf("%d", &b[i]);
    }
    
    for(i = 0; i < na; i++) {
        for(j = 0; j < nb; j++) {
            if(a[i] == b[j]) {
                k++;
            }
        }
    }
    printf("%d\n", k);
    return 0;
}