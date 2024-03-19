#include<stdio.h>

int main(void)
{
    int n, m, i, j, card[4][14] ={0};
    char s, S[]="SHCD";
 
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %c %d", &s, &m);
        for (j=0; j<4; j++)
             if (s == S[j]) card[j][m] =1;
    }
    for (i = 0; i < 4; i++) {
        for (j = 1;  j < 14; j++) {
            if (card[i][j] == 0) {
                printf("%c %d\n", S[i], j);
             }
         }
    }
}


