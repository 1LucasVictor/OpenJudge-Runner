#include<stdio.h>
int main()
{
    int D, N, i;
    int dh=1;
    scanf("%d %d", &D, &N);
    for(i=0; i<D; i++)
        dh=dh*100;
    if(N==100)
        printf("%d\n", N*dh + dh);
    else
        printf("%d\n", N*dh);
    return 0;
}