#include<stdio.h>

int main(void)
{
    int card[4][14] ={0};
    int n, m, i, j;
    char s;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %c %d", &s, &m);
         switch (s) {
         case 'S': card[0][m] = 1; break;
         case 'H': card[1][m] = 1; break;
         case 'C': card[2][m] = 1; break;
         case 'D': card[3][m] = 1; break;
         }
    }
    for (i = 0; i < 4; i++) {
        for (j = 1;  j < 14; j++) {
            if (card[i][j] == 0) {
                switch (i) {
                case 0: printf("S "); break;
                case 1: printf("H "); break;
                case 2: printf("C "); break;
                case 3: printf("D "); break;
                }
                printf("%d\n", j);
             }
         }
    }
}


