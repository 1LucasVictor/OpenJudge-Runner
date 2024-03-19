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
long sumcar(TCarSet *car, unsigned short *ary)
{
    long i,j,sum;

    for (i=sum=0, j=car->ary; i<car->num; i++, j++)
        sum+=ary[j];
    return sum;
}
//----------------------------------------------------------------------------
void carinc(TCarSet *dst, TCarSet *src)
{
    dst->num++, src->num--, src->ary++;
}
//----------------------------------------------------------------------------
void cardec(TCarSet *dst, TCarSet *src)
{
    dst->num--, src->num++, src->ary--;
}
//----------------------------------------------------------------------------
long caradjust(TCarSet *dst, TCarSet *src, long ave, unsigned short *ary)
{
    long dval, sval;

    dval = sumcar(dst, ary);
    if (dval==ave)
        return dval;
    while(dval<ave && 1<src->num){
        carinc(dst, src);
        sval=dval = sumcar(dst, ary);
    }
    while(sval>ave && 1<dst->num){
        cardec(dst, src);
        sval = sumcar(dst, ary);
    }
    if (abs(sval-ave)<abs(dval-ave))
        return sval;
    carinc(dst, src);
    return dval;
}
//----------------------------------------------------------------------------
void carshift(unsigned short *ary, long max, long min, TCarSet *car)
{
    void (*fptr)(TCarSet *, TCarSet *);
    long i,f,e;

    if (max<min){
        fptr=cardec;
        f=max, e=min;
    }else{
        fptr=carinc;
        f=min, e=max;
    }
    for (i=f; i<e; i++)
        fptr(&car[i], &car[succ(i)]);
}
//----------------------------------------------------------------------------
void input(void)
{
    long i,K,N,n,na,ave, mod,max,maxp,min,minp,val,sum;
    unsigned short *ary;
    TCarSet *carset;

    scanf("%ld", &N);
    scanf("%ld", &K);
    carset=malloc(K*sizeof(TCarSet));
    ary=malloc(N*sizeof(unsigned short));
    for (i=sum=max=0; i<N; i++){
        scanf("%d", &ary[i]);
        sum+=ary[i];
    }
    na = N/K;
    mod = N % K;
    ave = sum/K;
    for (i=n=minp=maxp=max=0, min=999999; i<K; i++){
        carset[i].ary=n;
        carset[i].num=(mod<=i)? na : succ(na);
        n += carset[i].num;
        val=sumcar(&carset[i], ary);
        if (val<min) min=val, minp=i;
        if (max<val) max=val, maxp=i;
    }
    while (ave<=abs(max-min)){
        carshift(ary, maxp, minp, carset);
        for (i=minp=maxp=max=0, min=999999; i<K; i++){
            val=sumcar(&carset[i], ary);
            if (val<min) min=val, minp=i;
            if (max<val) max=val, maxp=i;
        }
    }
    printf("%ld\n", max);
    free(carset);
    free(ary);
}
//============================================================================
int main()
{
    input();
    return 0;
}