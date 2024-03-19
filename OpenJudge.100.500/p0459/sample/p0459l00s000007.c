#include<stdio.h>

int main(void){
    int x,y,kame=0,turu=0,score = 0;

    scanf("%d %d",&x,&y);

    for(kame = 0; kame <= x;kame++){
        for(turu = x;turu >= 0;turu--){
            if(kame * 4 + turu *2 == y){
                score = 1;
            }
        }
    }
    if(score == 1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
}