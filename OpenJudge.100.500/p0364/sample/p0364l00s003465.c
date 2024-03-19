#include<stdio.h>
int main(void){
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    if(W>x+r&&H>y+r){
        puts("Yes");
    }else{
        puts("No");
    }
    return 0;
}