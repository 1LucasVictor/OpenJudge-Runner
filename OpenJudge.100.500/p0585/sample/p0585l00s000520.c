#include <stdio.h>
#include <math.h>
int main(void)
{
    int A,B,T;
    scanf("%d %d %d", &A, &B, &T);
    int x=floor((T+0.5)/A)*B;
    printf("%d", x);
}