#include<stdio.h>
#include<stdbool.h>
#ifdef DEBUG
#include<conio.h>
#endif // DEBUG

bool S[14];
bool H[14];
bool D[14];
bool C[14];

int main () {
#ifdef DEBUG
    freopen("input.txt", "r", stdin);
#endif // DEBUG

    int num;
    scanf("%d", &num);
    getchar();
    char ch;
    int digit;
    for (size_t i = 0; i < num; i++)
    {
        scanf("%c %d", &ch, &digit);
        getchar();

        switch (ch)
        {
            case 'S':
                S[digit] = true;
                break;
            case 'H':
                H[digit] = true;
                break;
            case 'C':
                C[digit] = true;
                break;
            case 'D':
                D[digit] = true;
                break;
        }
    }

    for (size_t i = 1; i < 14; i++) {
        if(!S[i]) printf("S %d\n", i);
    }
    for (size_t i = 1; i < 14; i++) {
        if(!H[i]) printf("H %d\n", i);
    }
    for (size_t i = 1; i < 14; i++) {
        if(!C[i]) printf("C %d\n", i);
    }
    for (size_t i = 1; i < 14; i++) {
        if(!D[i]) printf("D %d\n", i);
    }
    
#ifdef DEBUG
    getch();
#endif // DEBUG
    return 0;
}

