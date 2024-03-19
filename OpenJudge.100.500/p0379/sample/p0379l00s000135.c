#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//============================================================================
#define PI 3.14159265359
#define succ(x) ((x)+1)
#define pred(x) ((x)-1)
//============================================================================
//============================================================================
void enter(FILE *file)
{
    int N,M,**aryA,*aryB,*Ans,i,m,n,v;

    fscanf(file, "%d", &N);
    fscanf(file, "%d", &M);
    aryA=malloc(M*sizeof(int*));
    for (i=0; i<M; i++)
        aryA[i]=malloc(N*sizeof(int));
    aryB=malloc(M*sizeof(int));
    Ans=malloc(N*sizeof(int));
    for (n=0; n<N; n++){
        for (m=0; m<M; m++){
            fscanf(file, "%d", &v);
            aryA[m][n]=v;
        }
    }
    for (m=0; m<M; m++)
        fscanf(file, "%d", &aryB[m]);
    for (n=0; n<N; n++)
    for (Ans[n]=m=0; m<M; m++)
        Ans[n]+=aryA[m][n]*aryB[m];
    for (n=0; n<N; n++)
        printf("%d\n", Ans[n]);

    free(Ans);
    free(aryB);
    for (i=0; i<N; i++)
        free(aryA[i]);
    free(aryA);
}
//============================================================================
#ifndef DESKTOP
int main(void)
{
    enter(stdin);
    return 0;
}
#endif