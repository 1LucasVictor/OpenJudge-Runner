#include <stdio.h>

int main(void)
{
    int N, A[100];

    scanf("%d", &N);

    for(int i = 0; i < N; ++i)
    {
        scanf("%d", &A[i]);
    }

    int flag = 1, count = 0, temp;
    
    while(flag)
    {
        flag = 0;

        for(int i = N - 1; i > 0; --i)
        {
            if(A[i] < A[i - 1])
            {
                temp     = A[i];
                A[i]     = A[i - 1];
                A[i - 1] = temp;

                flag = 1;
                ++count;
            }
        }
    }

    for(int i = 0; i < N; ++i)
    {
        printf("%d%s", A[i], i != N -1 ? " " : "\n");
    }

    printf("%d\n", count);

    return 0;
}