#include<stdio.h>
int main()
{
    int D,N,i,a = 1;

    scanf("%d %d", &D,&N);

    for(i = 0;i < D;i++){
        a = a * 100;
    }

    if(N == 100)
        a = a * (N + 1);
    else a = a * N;

    printf("%d",a);

    return 0;
}