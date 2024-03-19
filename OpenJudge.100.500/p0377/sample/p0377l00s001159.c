#include <stdio.h>

int main(void) {

    int i, j, n, nbuf;
    int EXS[4][13];
    char sbuf;

    for (i = 0; i < 4; i++) {
    for (j = 0; j < 13; j++) {
        EXS[i][j] = 0;
    }
    }

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        nbuf = 0;
        sbuf = '\0';
        scanf("%*c%c%d", &sbuf, &nbuf);
        switch (sbuf) {
            case 'S':
                EXS[0][nbuf - 1] = 1; break;
            case 'H':
                EXS[1][nbuf - 1] = 1; break;
            case 'C':
                EXS[2][nbuf - 1] = 1; break;
            case 'D':
                EXS[3][nbuf - 1] = 1; break;
        }
    }

    for (i = 0; i < 4; i++) {
    for (j = 0; j < 13; j++) {
        if (EXS[i][j] == 0) {
            switch (i) {
                case 0:
                    printf("S %d\n", j + 1); break;
                case 1:
                    printf("H %d\n", j + 1); break;
                case 2:
                    printf("C %d\n", j + 1); break;
                case 3:
                    printf("D %d\n", j + 1); break;
            }
        }
    }
    }

    return 0;

}