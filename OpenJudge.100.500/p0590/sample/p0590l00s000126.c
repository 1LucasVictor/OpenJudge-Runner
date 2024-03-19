#include <stdio.h>

int main(void){
    int coor[5];
    int lim;
    int i,j;
    int flag = 1;
    
    for(i = 0; i < 5; i++){
        scanf("%d", &coor[i]);
    }
    
    scanf("%d", &lim);
    
    for(i = 0; i < 5; i++){
        for(j = i+1; j < 5; j++){
            if(coor[j] - coor[i] > lim){
                flag = 0;
                break;
            }
        }
    }
    
    
    if(flag){
        puts("Yay!");
    }else{
        puts(":(");
    }
    
    return 0;
}