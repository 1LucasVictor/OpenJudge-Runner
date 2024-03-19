#include<stdio.h>

int main(void){
    int i,j,b;
    int trump[4][13] = {};
    char suit[2],a;
    int  num,number;

    scanf("%d",&num);

    for(i = 0; i < num; i++){
        scanf("%s %d",suit,&number);

        switch(suit[0]){
            case 'S':
                b = 0;
                break;
            case 'H':
                b = 1;
                break;
            case 'C':
                b = 2;
                break;
            case 'D':
                b = 3;
                break;
        }
        trump[b][number-1] =  1;
    }


    for(i = 0; i < 4; i++){
        for(j = 0; j < 13; j++){
            if(trump[i][j] != 1){

                switch(i){
                    case 0:
                        a = 'S';
                        break;
                    case 1:
                        a = 'H';
                        break;
                    case 2:
                        a = 'C';
                        break;
                    case 3:
                        a = 'D';
                        break;
                }
                printf("%c %d\n",a, j+1);
            }
 }
    }
    return 0;
}