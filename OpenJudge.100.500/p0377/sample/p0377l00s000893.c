#include <stdio.h>

int main(void){
    int n,i,j,card;
    int state[4][13]={};
    char kind;
    char label[4]="SHCD";
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %c",&kind);
        scanf("%d",&card);
        switch(kind){
            case 'S':state[0][card-1]=1;break;
            case 'H':state[1][card-1]=1;break;
            case 'C':state[2][card-1]=1;break;
            case 'D':state[3][card-1]=1;break;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<13;j++){
            if(state[i][j]==0)
                printf("%c %d\n",label[i],j+1);
        }
    }
    return 0;
}