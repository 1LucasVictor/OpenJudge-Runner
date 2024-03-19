#include <stdio.h>
int main(void){
        char type;
        int card[4][13]={0},num,amount,i,j;
        scanf("%d",&amount);
        for(i=0;i<amount;i++){
                scanf(" %c %d",&type,&num);
                if(type == 'S')
                        card[0][num-1]=1;
                else if(type =='H')
                        card[1][num-1]=1;
                else if(type=='C')
                        card[2][num-1]=1;
                else if(type=='D')
                        card[3][num-1]=1;
        }
        for(i=0;i<4;i++){
                for(j=0;j<13;j++){
                        if(card[i][j]==0){
                                switch(i){
                                        case 0:
                                                putchar('S');
                                                break;
                                        case 1:
                                                putchar('H');
                                                break;
                                        case 2:
                                                putchar('C');
                                                break;
                                        case 3:
                                                putchar('D');
                                                break;
                                }
                                printf(" %d\n",j+1);
                        }
                }
        }
        return 0;
}