#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void) {

    int x,y,s=0;
    scanf("%d%d",&x,&y);

    for(int c = 0; c<x; c++) {


        
        
        if(2 * (x -c) +( c * 4 )== y){
        
        printf("Yes");
        s = 0;
        c = x;
        }
        else{ s++;  }

    }
    
if(s++ > 0 || x == 0){printf("No");}
    return 0;
}

