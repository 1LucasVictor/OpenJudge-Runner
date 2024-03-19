#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define max 100000

//qsort(d, n, sizeof(int), up_comp);
int up_comp(const void *a, const void *b){return *(int*)a - *(int*)b;}
int down_comp(const void *a, const void *b){return *(int*)b - *(int*)a;}

int main()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    if(a>9||b>9)
        printf("%d", -1);
    else
        printf("%d", a*b);
    
    return 0;
}

