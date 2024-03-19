#include <stdio.h>

int main(int argv, char *argc[]){
    int input, loop, checker;
    
    scanf("%d", &input);
    
    for(loop=1; input>=loop; loop++){   /*入力値を超えるまで1づつ増加するloop*/
        if((loop%3) == 0){              /*loopが3で割れるなら出力、次の周回へ*/
            printf(" %d", loop);
            continue;
        }
        
        for(checker=loop; 0<checker; checker/=10){
            if(((checker%10) == 3)){    /*loopの1の桁が3なら出力、次の周回へ */
                printf(" %d", loop);    /*違ったら1の桁を捨て、1桁づつズラす */
                break;                  /*そのために10で割って、3がloopに    */
            }                           /*含まれてないか調査する             */
        }
        
    }
    
    printf("\n");
    return 0;
}