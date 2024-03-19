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
#ifdef DESKTOP
void input(FILE *file)
#else
void input()
#endif
{
    long K,N,k,n,max,sum,res,val;
    unsigned short *ary;

#ifdef DESKTOP
    fscanf(file, "%ld", &N);
    fscanf(file, "%ld", &K);
#else
    scanf("%ld", &N);
    scanf("%ld", &K);
#endif
    ary=malloc(N*sizeof(unsigned short));
    for (n=sum=max=0; n<N; n++){
#ifdef DESKTOP
        fscanf(file, "%d", &ary[n]);
#else
        scanf("%d", &ary[n]);
#endif
        sum+=ary[n];
        if (max<ary[n])
            max=ary[n];
    }
    if (K==1)
        max=succ(sum);
    else{
        val = sum/K;
        if (max<val)
            max=val;
        for (res=0; res!=sum; max++){
#ifdef DESKTOP
            printf("max=%ld:", max);
#endif
            for (k=n=res=0; k<K && n<N; k++){
                for (val=0; val<=max && n<N; n++){
                    val+=ary[n];
                }
                if (max<val){
                    n--;
                    val-=ary[n];
                }
                res+=val;
#ifdef DESKTOP
                printf(" %ld", val);
#endif
            }
#ifdef DESKTOP
            printf("\n");
#endif
        }
    }
    printf("%ld\n", pred(max));
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
//---------------------------------------------------------------------------