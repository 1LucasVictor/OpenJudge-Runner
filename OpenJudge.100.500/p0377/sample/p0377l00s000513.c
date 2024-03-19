#include <stdio.h>
int main(void){
    int card[4][14] ;
    int n , no , i , j ;
    char e , d ;
    
    for(i = 0 ; i < 4 ; i++){
        for(j = 0 ; j < 14 ; j++){
            card[i][j] = 0;
        }
    }
    
    scanf("%d" , &n);
    for(i = 0 ; i < n ; i++){
        scanf("%c" , &d);
        scanf("%c %d" , &e , &no);
        if(e == 'S'){
            card[0][no] = 1;
        }
        else if(e == 'H'){
            card[1][no] = 1;
        }
        else if(e == 'C'){
            card[2][no] = 1;
        }
        else if(e == 'D'){
            card[3][no] = 1;
        }
    }
    
    for(j = 1 ; j < 14 ; j++){
        if(card[0][j] != 1){
            printf("S %d\n" , j);
        }
    }
    
    for(j = 1 ; j < 14 ; j++){
        if(card[1][j] != 1){
            printf("H %d\n" , j);
        }
    }
    for(j = 1 ; j < 14 ; j++){
        if(card[2][j] != 1){
            printf("C %d\n" , j);
        }
    }
    for(j = 1 ; j < 14 ; j++){
        if(card[3][j] != 1){
            printf("D %d\n" , j);
        }
    }
    return 0;
}
