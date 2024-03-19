/*Problem A : Serval vs Monster*/
#include<stdio.h>

int main(void)
{
    int A,H;

    scanf("%d %d", &H,&A);

    int count = 1;

    while(H > A)
    {
        H = H - A;
        count++;
    }
    printf("%d\n", count);

    return 0;
}
