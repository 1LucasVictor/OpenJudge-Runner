#include <stdio.h>

int main(void)
{
    unsigned long long int N, answer = 0;
    unsigned long long int A[200000] = {0};
    scanf("%llu", &N);
    for (unsigned long long int i = 0; i < N-1; i++)
    {
        scanf("%llu", &A[i]);
    }

    for (unsigned long long int j = 0; j < N; j++)
    {
        for (unsigned long long int k = 0; k < N-1; k++)
        {
            if (j+1 == A[k])
            {
                answer ++;
            }
            
        }
        printf("%llu\n", answer);
        answer = 0;
    }
    




    
    return 0;
}