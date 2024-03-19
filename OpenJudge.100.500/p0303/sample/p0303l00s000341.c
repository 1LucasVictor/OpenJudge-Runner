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
void dump(int *A, int N)
{
    int i;

    for (i=0; i<N; i++){
        if (i)
            printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
}
//============================================================================
void cdump(char *str)
{
    int i;

    printf("%d:", strlen(str));;
    for (i=0; i<strlen(str); i++){
        if (i)
            printf(" ");
        printf("%02X", (unsigned char)str[i]);
    }
    printf("\n");
}
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
void input(void)
{
    long i,j,K,N,MIN,n,na,max,min,sum; unsigned short ave,*ary;

    scanf("%ld", &N);
    scanf("%ld", &K);
    ary=malloc(N*sizeof(short));
    for (i=sum=max=0; i<N; i++){
        scanf("%d", &ary[i]);
        sum+=ary[i];
    }
    ave=sum/N;
    na=sum/K;
    for (i=MIN=0; i<N; i++){
        for (min=n=0,j=i; n<na && min<na; n++, j++)
            min+=ary[j];
        for (;min<na; j++)
            min+=ary[j];
        j--;
        if ((na*2)<min)
            min-=ary[j];
        i=j;
        if (MIN<min)
            MIN=min;
        //if (i) printf(" ");
        //printf("%d ", min);
    }
    printf("%ld\n", MIN);
    free(ary);
}
//============================================================================
int main()
{
    input();
    return 0;
}