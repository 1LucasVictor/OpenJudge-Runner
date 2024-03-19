#include <stdio.h>

int main(void)
{
    int A,B,K;
    scanf("%d %d",&A, &B);

    K = A+B;

    if(K%2 == 0){
        printf("%d\n",K/2);
    } else {
        printf("IMPOSSIBLE\n");
    }



    return 0;
}