#include<stdio.h>

int main(void){
    int n,i,j,num;
    char a,S[4]={'S','H','C','D'};
    int cards[4][13];

    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            cards[i][j]=0;
        }
    }

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%*c%c %d",&a,&num);
        switch (a){
            case 'S':
                cards[0][num-1]=1;
                break;
            case 'H':
                cards[1][num-1]=1;
                break;
            case 'C':
                cards[2][num-1]=1;
                break;
            case 'D':
                cards[3][num-1]=1;
                break;
        }
    }

    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(cards[i][j]==0) printf("%c %d\n",S[i],j+1);
        }
    }
    return 0;
}
