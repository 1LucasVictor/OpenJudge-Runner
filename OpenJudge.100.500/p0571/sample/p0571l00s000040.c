#include <stdio.h>
int main(void)
{
    int N;
    int A;
    int B;
    scanf("%d",&N);
    scanf("%d",&A);
    scanf("%d",&B);
    if(B<N*A) printf("%d\n",B);
    if(B>=N*A) printf("%d\n",N*A);
    return 0;
}
