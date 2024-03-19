#include <stdio.h>

int main(void)
{
    int H;
    int A;
    int N;
    int M;

    scanf("%d %d",&H,&A);

    N=H/A;
    M=H%A;
    if (M != 0)
    {
        N = N + 1;
    }
    

    printf("%d",N);

    return 0;
}