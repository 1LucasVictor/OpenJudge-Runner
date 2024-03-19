#include <stdio.h>
int main(void)
{
    int N;
    int a[1001];
    int flag = 0;
    scanf("%d ", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d ", &a[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (a[i] % 3 != 0 && a[i] % 5 != 0)
            {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("APPROVED");
    }
    if (flag == 1)
    {
        printf("DENIED");
    }
    return 0;
}