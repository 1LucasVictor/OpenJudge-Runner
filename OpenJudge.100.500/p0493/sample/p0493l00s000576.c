#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define max 6

//qsort(d, n, sizeof(int), up_comp);
int up_comp(const void *a, const void *b){return *(int*)a - *(int*)b;}
int down_comp(const void *a, const void *b){return *(int*)b - *(int*)a;}

int main()
{
    long int in, i, j=0;
    long int fihun, fiv;
    
    scanf("%ld", &i);
    
    fihun = i/500;
    fiv = (i-fihun*500)/5;
    
    printf("%ld", fihun*1000+fiv*5);

    return 0;
}

