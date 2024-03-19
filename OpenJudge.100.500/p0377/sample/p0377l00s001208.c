#include <stdio.h>

int main() {
    int n, rank, markI;
    char markC;
    scanf("%d", &n);
    int card[4][13] = {};
  
    for (int i=0; i<n; i++) {
        scanf("%*c%c %d", &markC, &rank);
        switch (markC) {
            case 'S':
                markI = 0;
                break;
            case 'H':
                markI = 1;
                break;
            case 'C':
                markI = 2;
                break;
            case 'D':
                markI = 3;
                break;
        }
        card[markI][rank-1] = 1;
    }
    for (int j=0; j<4; j++) {
        for (int k=0; k<13; k++) {
            if (card[j][k] == 1) {continue;}
            switch (j) {
                case 0: markC = 'S'; break;
                case 1: markC = 'H'; break;
                case 2: markC = 'C'; break;
                case 3: markC = 'D'; break;
            }
            printf("%c %d\n", markC, k+1);
        }
    }
    return 0;
}

