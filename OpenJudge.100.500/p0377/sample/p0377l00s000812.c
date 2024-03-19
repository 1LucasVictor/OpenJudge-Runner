#include <stdio.h>
int main(void){
    int n, m, i, j, k;
    char c;
    int card[4][13];
    char mark[4] = {'S', 'H', 'C', 'D'};
   
    scanf("%d\n",&n);
    
    for(i=0; i<n; i++) {
        scanf("%c %d\n", &c, &m);
        for(j=0; j<4; j++) {
            if (c == mark[j]) card[j][m-1] = 1;
        }
    }
    
    for(j=0; j<4; j++) {
        for(k=1; k<=13; k++) {
            if (card[j][k-1] != 1) printf("%c %d\n", mark[j], k);
        }
    }
    
    return 0;
}

