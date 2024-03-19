#include <stdio.h>
#include <string.h>
int main(void)
{
    int N;
    int a[200000];
    for (int i = 0; i < 200000; i++)
    {
        a[i] = -1;
    }
    int flag = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int k = i + 1; k < N; k++)
        {
            if (a[i] == a[k])
            {
                printf("NO");
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("YES");
    }
    return 0;
}