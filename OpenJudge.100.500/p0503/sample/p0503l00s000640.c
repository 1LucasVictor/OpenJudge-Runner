#include <stdio.h>
#include <string.h>

int main()
{
    int N,i,j,judge = 0;
    scanf("%d", &N);
    long long A[N];
    
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    for (i = 0; i < N-1; i++)
    {
        for (j = i + 1; j < N; j++)
        {
            if (A[i]==A[j])
            {
                judge = 1;
                break;
            }
        }

        if (A[i]==A[j])
            {
                break;
            }
    }

    if(judge==1) printf("NO");
    else printf("YES");

    return 0;
}