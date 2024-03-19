#include <stdio.h>

int main(void)
{
    int A, B, K, i;
    int min, cnt = 0;
    scanf("%d%d%d", &A, &B, &K);

    min = A < B ? A : B;            

    for (i = min; i > 0; i--)
    {
        if(A % i == 0 && B % i == 0){
            cnt++;
            if(cnt == K){
                break;
            }
        }
    }
    printf("%d\n", i);
    
    return 0;
}