#include <stdio.h>
 
int main()
{
    int card[4][13]={0};
    int i, j, n, num;
    char suit;
    const char suits[4]={'S', 'H', 'C', 'D'};
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf(" %c %d", &suit, &num);
        if     (suit=='S') card[0][num-1]=1;
        else if(suit=='H') card[1][num-1]=1;
        else if(suit=='C') card[2][num-1]=1;
        else if(suit=='D') card[3][num-1]=1;
    }
 
    for(i=0; i<4; i++) {
        for(j=0; j<13; j++) {
            if(card[i][j]==0) printf("%c %d\n", suits[i], j+1);
        }
    }
    return 0;
}