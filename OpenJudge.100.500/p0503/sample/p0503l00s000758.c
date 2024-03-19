#include <stdio.h>

int main(void)
{
    unsigned int N;
    unsigned int A[200000];
    unsigned int i, j;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (i != 0)
        {
            for (j = i - 1; j < i; j--)
            {
                // printf("%d = %d, %d = %d\n", i, A[i], j, A[j]);
                if (A[i] == A[j])
                {
                    printf("NO");
                    return (0);
                }
            }
        }
    }
    printf("YES");
	return (0);
}