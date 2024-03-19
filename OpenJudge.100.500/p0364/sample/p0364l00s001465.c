//
//  main.c
//  Practice
//
//  Created by hoshino on 2015/10/19.
//  Copyright ?? 2015??´ hoshino. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int W,H,x,y,r;

    scanf("%d %d %d %d %d", &W,&H,&x,&y,&r);
    if(x-r<0 || x+r>W){
        printf("No\n");
    }else if(y-r<0 || y+r>H){
        printf("No\n");
    }else
     {
         printf("Yes\n");
    }
    
    //insert code here...
    
    return 0;
}