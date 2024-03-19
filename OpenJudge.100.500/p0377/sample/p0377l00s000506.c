#include <stdio.h>
#define FOR(i,n) for(i = 0; i < n; i++)

int main(void){
    char M;
    int RankS[13], RankH[13], RankC[13], RankD[13];
    int R;
    int n, i, j;
    FOR(i, 13){
        RankS[i] = i + 1;
        RankH[i] = i + 1;
        RankC[i] = i + 1;
        RankD[i] = i + 1;
    }
    scanf("%d", &n);
    FOR(i,n){
        scanf(" %c %d", &M, &R);
        switch (M){
        case 'S':
            RankS[R - 1] = 0;
            break;
        case 'H':
            RankH[R - 1] = 0;
            break;
        case 'C':
            RankC[R - 1] = 0;
            break;
        case 'D':
            RankD[R - 1] = 0;
            break;
        }
    }

    FOR(i, 13){
        if (RankS[i] != 0)printf("S %d\n", RankS[i]);
    }FOR(i, 13){
        if (RankH[i] != 0)printf("H %d\n", RankH[i]);
    }FOR(i, 13){
        if (RankC[i] != 0)printf("C %d\n", RankC[i]);
    }FOR(i, 13){
        if (RankD[i] != 0)printf("D %d\n", RankD[i]);
    }
    return 0;
}