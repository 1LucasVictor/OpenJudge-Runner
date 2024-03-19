#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;

    int S[13] = {0};
    int C[13] = {0};
    int H[13] = {0};
    int D[13] = {0};

    scanf("%d" , &n);

    for (int i = 0; i < n*2; i++)
    {
        char c;
        int x;
        scanf("%c", &c);
        scanf("%d", &x);

        switch (c)
        {
        case 'S':
            S[x-1] = 1;
            break;
        case 'H':
            H[x-1] = 1;
            break;
        case 'C':
            C[x-1] = 1;
            break;
        case 'D':
            D[x-1] = 1;
            break;

        default:
            break;
        }
    }

    for (int i = 0; i < 13; i++)
    {
        if (S[i] != 1)
        {
            printf("%c %d\n",'S',i+1);
        }
    }

    for (int i = 0; i < 13; i++)
    {
        if (H[i] != 1)
        {
            printf("%c %d\n",'H',i+1);
        }
    }

    for (int i = 0; i < 13; i++)
    {
        if (C[i] != 1)
        {
            printf("%c %d\n",'C',i+1);
        }
    }

    for (int i = 0; i < 13; i++)
    {
        if (D[i] != 1)
        {
            printf("%c %d\n",'D',i+1);
        }
    }

    return 0;
}

