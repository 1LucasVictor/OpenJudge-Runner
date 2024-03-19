#include<stdio.h>

int main(void){
    
    int W,H,x,y,r;
    int t = 0;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    
    if(x+r > W || y+r > H){
        t = 1;
    }
    if(x-r < 0 || y-r < 0){
        t = 1;
    }
    if(t==0){
        puts("Yes");
    }else{
        puts("No");
    }
    return(0);
}
