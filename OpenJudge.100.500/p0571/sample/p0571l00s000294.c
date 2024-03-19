#include <stdio.h>
int main(void)
{
    int A;
    int B;
    int N;
    scanf("%d",&N);
    scanf("%d",&A);
    scanf("%d",&B);
    
    if(N*A<B)
    {
        printf("%d\n",N*A);
    }
    else
    {
        printf("%d\n",B);
    }
    return 0;   
}
