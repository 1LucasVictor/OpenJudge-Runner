#include <stdlib.h>
#include <stdio.h>


int main(){
    int x,y;
    int turtle =4;
    int crane = 2;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x < 0 || y < 0){
        printf("No");
        return 0;
    }   
    if(x == 0 && y == 0){
        printf("Yes");
        return 0;
    } 
    if(x ==y ){
        printf("No");
        return 0;
    }
    if(crane * x == y || turtle * x ==y){
        printf("yes");
        return 0 ;
    }
    
    while(x != 0){
       if(y == 0){
        break;
       } 
       if(y > turtle){
            y -= turtle;
       }else if(2 <= y <= crane){

            y -=crane;
       } 
        x--;
    }    
    if(y == 0){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}
