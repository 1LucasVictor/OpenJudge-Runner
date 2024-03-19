#include <stdio.h>

int main(void)
{
    int A, B, K, i;
    int min, cnt = 0;
    scanf("%d%d%d", &A, &B, &K);

    min = A < B ? A : B;            

    for (i = min; i > 0; min--)
    {
        if(A % min == 0 && B % min == 0){
            cnt++;
            if(cnt == K){
                break;
            }
        }
    }
    printf("%d\n", K);
    
    return 0;
}