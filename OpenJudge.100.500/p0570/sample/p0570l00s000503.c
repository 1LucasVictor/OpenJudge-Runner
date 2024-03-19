#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define max 1000

//qsort(str, n, sizeof(int), up_comp);
int up_comp(const void *a, const void *b){return *(int*)a - *(int*)b;}
int down_comp(const void *a, const void *b){return *(int*)b - *(int*)a;}

int main()
{
    long int a, b;
    
    scanf("%ld %ld", &a, &b);
    
    if ((a+b)%2==0) {
        printf("%ld", (a+b)/2);
    } else {
        printf("IMPOSSIBLE");
    }
    
    return 0;
}

