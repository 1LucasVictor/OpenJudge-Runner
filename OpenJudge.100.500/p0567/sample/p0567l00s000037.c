#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define max 50

//qsort(str, n, sizeof(int), up_comp);
int up_comp(const void *a, const void *b){return *(int*)a - *(int*)b;}
int down_comp(const void *a, const void *b){return *(int*)b - *(int*)a;}

int main()
{
    int a, b, c, d;
    
    scanf("%d %d %d", &a, &b, &c);
    
    d=c-(a-b);
    
    if (d>=0) {
        printf("%d", d);
    } else {
        printf("%d", 0);
    }
    
    return 0;
}

