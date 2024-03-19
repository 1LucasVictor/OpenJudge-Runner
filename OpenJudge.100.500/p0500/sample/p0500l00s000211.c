#include <stdio.h>
#include <stdlib.h>

void return_err()
{
    printf("%d", -1);
}

int main(int argc, char const *argv[])
{
    int N, M;
    scanf("%1d %1d", &N, &M);

    int *s = (int *) malloc(sizeof(int) * M);
    int *c = (int *) malloc(sizeof(int) * M);
    char *val = (char *) malloc(sizeof(char) * N);

    if (1 == N)
    {
        val[0] = 0;
    } else {
        for (int i = 0; i < N; i++)
        {
            val[i] = (0 == i) ? 1 : 0;
        }
    }
    
    for (int i = 0; i < M; i++)
    {
        scanf("%1d %1d", s+i, c+i);

        if (N > 1 && 1 == s[i] && 0 == c[i]){
            return_err();
            return 0;
        }

        for (int j = 0; j < i; j++)
        {
            if (s[j] == s[i])
            {
                if(c[j] != c[i])
                {
                    return_err();
                    return 0;
                } else {
                    continue;
                }
            }
        }

        val[s[i]-1] = c[i];
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d", val[i]);
    }
    
    
    free(s);
    free(c);
    free(val);
    return 0;
}
