#include <stdio.h>
int main(void){
    
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    
    if(W<y+r){
        printf("No\n");
    } 
    else if(H<x+r){
        printf("No\n");
    } 
    else if(y-r<0){
        printf("No\n");
    } 
    else if(x-r<0){
        printf("No\n");
    } 
    else printf("Yes\n");
    
    return 0;
}

