#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            if (!(a % 3 == 0 | a % 5 == 0))
            {
                printf("DENIED");
                return 0;
            }
        }
    }
    printf("APPROVED");
    return 0;
}