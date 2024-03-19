#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//============================================================================
#define pred(x) ((x)-1)
#define succ(x) ((x)+1)
//============================================================================
long stored_fibona, lastx;
long fibona(short n)
{
    printf("enter %d\n", n);
    if (!n)
        n++;
    if (n<4)
        stored_fibona=n;
    else
        stored_fibona=fibona(n-1)+fibona(n-2);
    printf("n=%d\t%ld\n", n, stored_fibona);
    return stored_fibona;
}
//----------------------------------------------------------------------------
long fibonb(short n)
{
    long i,o,m;

    if (!n)
        n++;
    if (n<4)
        return n;
    for (i=3,o=m=1; i<=n; i++){
         if (o<m)
            o=o+m;
         else
            m=o+m;
    }
    return o+m;
}
//----------------------------------------------------------------------------
void input(FILE *file)
{
    short n; char buffer[20];

    fgets(buffer, sizeof(buffer)-1, file);
    sscanf(buffer, "%hd", &n);
    //for (n=0; n<45; n++)
        printf("%ld\n", fibonb(n));
}
//============================================================================
#ifndef DESKTOP
int main()
{
    input(stdin);
    return 0;
}
#endif