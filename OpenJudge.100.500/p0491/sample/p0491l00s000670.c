#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define max 100

//qsort(str, n, sizeof(int), up_comp);
int up_comp(const void *a, const void *b){return *(int*)a - *(int*)b;}
int down_comp(const void *a, const void *b){return *(int*)b - *(int*)a;}

int main()
{
    long long int n, k, a, b, c;
    
    scanf("%lld %lld", &n, &k);
    

    a=n%k;
    b=k-(n%k);
    
    if (a>b) {
        a=b;
    }
    
    printf("%lld", a);
    
    return 0;
}


