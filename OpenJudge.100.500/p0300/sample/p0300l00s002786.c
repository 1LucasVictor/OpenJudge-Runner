#include "stdio.h"

int main()
{
    int input = 0;
    int N = 0;
    int S[10000];
    int Q = 0;
    int T[500];
    int nCnt = 0;

    int i = 0;
    int j = 0;

    // ++++++++++
    // Init
    for(i = 0; i < 10000; i++) S[i] = 0;
    for(i = 0; i < 500; i++) T[i] = 0;

    // ++++++++++
    // Input nS[]
    scanf("%d", &input);
    if(input > 10001)
    {
        return 0;
    }
    N = input;

    for(i = 0; i < N; i++)
    {
        scanf("%d", &input);
        if(input > 1000000001)
        {
            return 0;
        }
        S[i] = input;
    }

    // ++++++++++
    // Input qT[]
    scanf("%d", &input);
    if(input > 501)
    {
        return 0;
    }
    Q = input;

    for(i = 0; i < Q; i++)
    {
        scanf("%d", &input);
        if(input > 1000000001)
        {
            return 0;
        }
        T[i] = input;
    }


    // **********
    // Search
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < Q; j++)
        {
            if(S[i] == T[j])
            {
                nCnt++;
            }
        }
    }
    printf("%d\n", nCnt);
    return 0;
}
