#include <stdlib.h>
#include <stdio.h>


int main(){
    int x,y;
    int turtle =4;
    int crane = 2;
    scanf("%d",&x);
    scanf("%d",&y);

    if(crane * x == y || turtle * x ==y){
        printf("yes");
        return 0 ;
    }
    
    while(x != 0){
       if(y > turtle){
            y -= turtle;
       }else if(0< y < turtle){

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
