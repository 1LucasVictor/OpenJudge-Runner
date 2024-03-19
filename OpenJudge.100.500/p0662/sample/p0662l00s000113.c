#include <stdio.h>
int main()
{
    int A,B,C,D,S,max;
    scanf("%d%d%d%d",&A, &B, &C, &D);
    if(A>=C)
    {
        if(B>=D)
            S = D-A;
        else
            S= B-A;
    }
    else
    {
        if(B>=D)
            S = D-C;
        else
            S= B-C;
    }
    if(S>=0)
        max=S;
    else
        max= 0;
    printf("%d",max);
    return 0;
}