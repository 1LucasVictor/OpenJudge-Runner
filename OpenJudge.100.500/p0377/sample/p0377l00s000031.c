#include<stdio.h>
int main(void){
    int havecard;
    int card[4][13] = {0};
    int i;
    char mark = 0;
    int number = 0;
    int j;
    scanf("%d",&havecard);
    for(i=1;i<=havecard*2;i++){
        scanf("%c %d",&mark,&number);
        if(mark=='S'){
            card[0][number-1]=1;
        }
        if(mark=='H'){
            card[1][number-1]=1;
        }
        if(mark=='C'){
            card[2][number-1]=1;
        }
        if(mark=='D'){
            card[3][number-1]=1;
        }
    }
    /*for(i=0;i<=3;i++){
        for(j=0;j<=12;j++){
            printf("%d",card[i][j]);
        }
        printf("\n");
    }*/
    for(i=0;i<=3;i++){
        if(i==0){
            mark = 'S';
            for(j=0;j<=12;j++){
                if(card[i][j]==0){
                    printf("%c %d\n",mark,j+1);
                }
            }
        }
         if(i==1){
            mark = 'H';
            for(j=0;j<=12;j++){
                if(card[i][j]==0){
                    printf("%c %d\n",mark,j+1);
                }
            }
        }
         if(i==2){
            mark = 'C';
            for(j=0;j<=12;j++){
                if(card[i][j]==0){
                    printf("%c %d\n",mark,j+1);
                }
            }
        }
         if(i==3){
            mark = 'D';
            for(j=0;j<=12;j++){
                if(card[i][j]==0){
                    printf("%c %d\n",mark,j+1);
                }
            }
        }
    }
    return 0;
}