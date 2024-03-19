#include<stdio.h>

int pows(int a, int b)
{
    int ans = a;
    if (b == 0)
    {
        return 1;
    }
    
    for (int i = 0; i < b-1; i++)
    {
        ans *= a;
    }
    return ans;
}

int main(void)
{
    int N, M, s[10], c[10], answer = 0;

    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &s[i], &c[i]);
    }
    
    for (int j = 0; j < M; j++)
    {
        for (int k = 0; k < M; k++)
        {
            if (s[k] == j+1)
            {
                answer += pows(10, N-j-1) * c[k];
                break;
            }
        }
    }

    if (answer/ pows(10, N-1) == 0)
    {
        printf("-1");
        return 0;
    }

    printf("%d", answer);
    
    return 0;
}