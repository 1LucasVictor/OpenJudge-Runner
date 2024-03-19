#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int N;
    int A[100] = {0};
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    for (int j = 0; j < N; j++)
    {
        if (A[j] % 2 == 0)
        {
            if ((A[j]%3 != 0) && (A[j]%5 != 0))
            {
                printf("DENIED");
                exit(0);
            }
            
        }
        
    }
    
    printf("APPROVED");
    
    return 0;
}