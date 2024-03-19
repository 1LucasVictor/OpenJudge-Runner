//============================================================================
// 
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
void enter()
{
    long N,i,min,max,sum, *ary;

    scanf("%ld", &N);
    ary=malloc(N*sizeof(long));
    for (i=max=sum=0,min=1000000000; i<N; i++){
        scanf("%ld", &ary[i]);
        sum+=ary[i];
        if (max<ary[i])
            max=ary[i];
        if (min>ary[i])
            min=ary[i];
    }
    printf("%ld %ld %ld\n", min, max, sum);
    free(ary);
}
//============================================================================
int main(void)
{
    enter();
    return 0;
}
//============================================================================