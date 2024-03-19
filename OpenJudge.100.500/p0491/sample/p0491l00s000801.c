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
    

        if (n%k!=0) {
            a=n/k;
            b=n-a*k;
            c=abs(n-(a+1)*k);
            if (c>b) {
                a=b;
            } else {
                a=c;
            }
        } else if (n%k==0) {
            a=0;
        }
    
    printf("%d", a);
    
    return 0;
}


