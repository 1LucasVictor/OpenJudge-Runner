#include <stdio.h>

int main(void)
{
    unsigned long long int N;
    unsigned long long int A[20000] = {0};
    unsigned long long int K[20000] = {0};
    scanf("%llu", &N);
    for (unsigned long long int i = 0; i < N-1; i++)
    {
        scanf("%llu", &A[i]);
    }

    for (unsigned long long int k = 0; k < N; k++)
    {
        for (unsigned long long int j = 0; j < N-1; j++)
        {
            if (k+1 == A[j])
            {
                K[k] ++;
            }
            
        }
        
    }
    
    for (unsigned long long int x = 0; x < N; x++)
    {
        printf("%llu\n", K[x]);
    }
    
    


    
    return 0;
}