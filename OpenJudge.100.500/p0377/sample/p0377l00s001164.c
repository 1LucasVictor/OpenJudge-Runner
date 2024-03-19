#include <stdio.h>
 
int main(void) { 
    char suitsAry[4];
    suitsAry[0] = 'S';
    suitsAry[1] = 'H';
    suitsAry[2] = 'C';
    suitsAry[3] = 'D';
    
    int cards[4][14] = {0}; 
    int c_num;
    scanf("%d",&c_num);

    char suit;
    int rank,index,i,j;
    for(i=0;i<2*c_num;i++) {
        scanf("%c %d",&suit,&rank);
        for(j=0;j<4;j++){
            if(suitsAry[j] == suit){
                cards[j][rank]=1;
                break;
            }           
        }
    }
    
    int i_suit,i_rank;
    for(i_suit=0;i_suit<4;i_suit++){
        for(i_rank=1;i_rank<=13;i_rank++){
            if(cards[i_suit][i_rank]==0) printf("%c %d\n",suitsAry[i_suit],i_rank);
        }
    }

    return 0;
}
