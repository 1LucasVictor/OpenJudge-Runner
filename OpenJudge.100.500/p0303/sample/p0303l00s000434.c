#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//============================================================================
#define pred(x) ((x)-1)
#define succ(x) ((x)+1)
//============================================================================
typedef struct{
    long ary;
    long num;
}TCarSet;
//============================================================================
//============================================================================

//============================================================================
//============================================================================
//long weight(unsigned short *ary, long *i, long *max)
//============================================================================
/*
    1<= wi <=10000
    1<= n <= 100000
    1<= k <= 100000
*/
//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
void input(void)
{
    long i,K,N,n,max,sum,val;
    unsigned short *ary;

    scanf("%ld", &N);
    scanf("%ld", &K);
    ary=malloc(N*sizeof(unsigned short));
    for (i=sum=max=0; i<N; i++){
        scanf("%d", &ary[i]);
        sum+=ary[i];
    }
    max = sum/K;
    if (1<K){
        for (; max<sum; max++){
            //printf("max=%ld:", max);
            for (i=n=0; i<K && n<N; i++){
                for (val=0; val<=max && n<N; n++)
                    val+=ary[n];
                if (max<val){
                    n--;
                    val-=ary[n];
                }
                //printf(" %ld", val);
                if (n==N && i<K)
                    continue;
            }
            //printf("\n");
            if (n==N && i==K && val<=max)
                break;
        }
    }
    printf("%ld\n", max);
    free(ary);
}
//============================================================================
#ifndef DESKTOP
int main()
{
    input();
    return 0;
}
#endif