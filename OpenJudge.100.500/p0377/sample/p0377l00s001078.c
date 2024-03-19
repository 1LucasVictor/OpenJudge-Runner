#include<stdio.h>
#include<stdbool.h>

int main(void){
    int count;
    char mark;
    int num;
    bool card[4][13] = {};
    char current_mark;
    scanf("%d\n", &count);
    for(int i=0; i<count; i++){
        scanf("%c %d\n", &mark, &num);
        switch(mark){
        case 'S':
            mark = 0;
            break;
        case 'H':
            mark = 1;
            break;
        case 'C':
            mark = 2;
            break;
        case 'D':
            mark = 3;
            break;
        }
        card[mark][num-1] = true;
    }
    
    for(int i=0; i<4; i++){
        switch(i){
        case 0:
            current_mark = 'S';
            break;
        case 1:
            current_mark = 'H';
            break;
        case 2:
            current_mark = 'C';
            break;
        case 3:
            current_mark = 'D';
            break;
        }
        for(int j=0; j<13; j++){
            if(card[i][j] != true){
                printf("%c %d\n", current_mark, j+1);
            }
        }
    }
}
