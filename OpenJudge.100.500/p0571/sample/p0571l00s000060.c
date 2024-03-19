#include <stdio.h>

int main(void)
{
    int N,A,B;
    scanf("%d",&N);
    scanf("%d",&A);
    scanf("%d",&B);
    printf("%d\n",(N*A<B)?N*A:B);
}
