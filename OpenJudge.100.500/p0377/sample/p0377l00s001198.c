#include <stdio.h>

int card[4][13];
char moji[]={'S','H','C','D'};

int main()
{
    int i,j,n;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        char a;
        int x;
        scanf(" %c %d",&a,&x);
        if(a=='S') card[0][x-1]=1;
        else if(a=='H') card[1][x-1]=1;
        else if(a=='C') card[2][x-1]=1;
        else if(a=='D') card[3][x-1]=1;
    }
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(card[i][j]==0){
                printf("%c %d\n",moji[i],j+1);
            }
        }
    }
    return 0;
}