#include <stdio.h>

int main(void)
{
    int N;
    int A[100];
    int even_num[100];
    int i, j, check_counter = 0;
    int even_num_length;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    // 偶数の数をeven_num[100]に入れる
    j = 0;
    for (i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            even_num[j] = A[i];
            j++;
        }
    }
    even_num_length = j;

    // even_numの全ての偶数が3または5で割り切れるか
    for (i = 0; i < even_num_length; i++)
    {
        if (even_num[i] % 3 == 0 || even_num[i] % 5 == 0)
        {
            check_counter++;
        }
    }

    // Approved or Denied
    if (check_counter == even_num_length)
    {
        printf("APPROVED");
    }
    else
    {
        printf("DENIED");
    }
    return (0);
}