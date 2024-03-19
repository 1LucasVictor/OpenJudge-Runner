#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//============================================================================
#define pred(x) ((x)-1)
#define succ(x) ((x)+1)
//============================================================================
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
void input(FILE *file)
{
    long i,K,N,n,max,sum,val;
    unsigned short *ary;

    fscanf(file, "%ld", &N);
    fscanf(file, "%ld", &K);
    ary=malloc(N*sizeof(unsigned short));
    for (i=sum=max=0; i<N; i++){
        fscanf(file, "%d", &ary[i]);
        sum+=ary[i];
        if (max<ary[i])
            max=ary[i];
    }
    if (K==1)
        max=sum;
    else{
        val = sum/K;
        if (max<val)
            max=val;
        for (; sum; max++){
#ifdef DESKTOP
            printf("max=%ld:", max);
#endif
            for (i=n=0; i<K && n<N; i++){
                for (val=0; val<=max && n<N; n++){
                    val+=ary[n];
                }
                if (max<val){
                    n--;
                    val-=ary[n];
                }
                sum-=val;
#ifdef DESKTOP
                printf(" %ld", val);
#endif
            }
#ifdef DESKTOP
            printf("\n");
#endif
            if (n==N && /*i==K &&*/ val<=max)
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
    input(stdin);
    return 0;
}
#endif
//---------------------------------------------------------------------------