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
    int n, i, j;
    
    scanf("%d", &n);
    
    for (i=1; i<10; i++) {
        for (j=i; j<10; j++) {
            if(n==i*j){
                printf("Yes");
                return 0;
            }
        }
    }
    
    printf("No");
    return 0;
}

