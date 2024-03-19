#include <stdio.h>

int main(){

    int x=0,y=0,w=0;

    scanf("%d",&y);
    
    for (int i = 0 ; i < 3 ;++i){
        x = y%10; 
        if(x != 7){
            y=y/10;
        }
        else{ 
            ++w;
            break;
    }
    }
    if(w == 1)
        puts("Yes");
    else    
        puts("No");
    
    return 0;
}
//todo
// !
// ?
// * 