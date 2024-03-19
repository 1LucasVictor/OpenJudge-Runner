#include<stdio.h>
#ifdef DEBUG
#include<conio.h>
#endif // DEBUG

int main () {
#ifdef DEBUG
    freopen("input.txt", "r", stdin);
#endif // DEBUG

    int a, b;
    while (scanf("%d %d", &a, &b), 0 != a && 0 != b)
    {
        for (size_t j = 0; j < b; j++)
            printf("#");
        printf("\n");

        for (size_t i = 1; i < a - 1; i++)
        {
            printf("#");
            for (size_t j = 1; j < b - 1; j++)
            {
                printf(".");
            }
            printf("#\n");
        }

        for (size_t j = 0; j < b; j++)
            printf("#");
        printf("\n");
        
        printf("\n");
    }

#ifdef DEBUG
    getch();
#endif // DEBUG
    return 0;
}


