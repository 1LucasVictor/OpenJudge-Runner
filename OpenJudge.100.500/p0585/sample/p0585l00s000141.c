#include <stdio.h>

int main()
{
    int A,B,T;
    int total;
    int n;

    scanf("%d %d %d\n",&A,&B,&T);

    total=0;
    n=T/A;
    total=B*n;

    printf("%d\n",total);

    return 0;
}