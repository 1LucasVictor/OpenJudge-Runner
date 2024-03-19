#include<stdio.h>
int main(void){
    int card[4][14],n,i,j,d;
    char c;
    scanf("%d",&n);
    for(i=0;i<4;i++){
        for(j=0;j<14;j++){
            card[i][j]=0;
        }
    }
    for(i=0;i<n;i++){
        scanf(" %c %d",&c,&d);
        if(c=='S'){
            card[0][d]=1;
        }else if(c=='H'){
            card[1][d]=1;
        }else if(c=='C'){
            card[2][d]=1;
        }else if(c=='D'){
            card[3][d]=1;
        }
    }
    for(i=0;i<4;i++){
        for(j=1;j<14;j++){
            if(card[i][j]==0){
                if(i==0){
                    printf("S");
                }else if(i==1){
                    printf("H");
                }else if(i==2){
                    printf("C");
                }else if(i==3){
                    printf("D");
                }
                printf(" ");
                printf("%d\n",j);
            }
        }
    }
    return 0;
}