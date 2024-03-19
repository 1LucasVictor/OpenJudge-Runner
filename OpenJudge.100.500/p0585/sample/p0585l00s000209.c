#include <stdio.h>

int sum(int a, int b , int t)
{
    int sum;
    sum = b * (t / a) ;
    return sum;
}
int main(void)
{
    int A, B, T ;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&T);
    printf("%d",sum(A, B, T));
    return 0;
}