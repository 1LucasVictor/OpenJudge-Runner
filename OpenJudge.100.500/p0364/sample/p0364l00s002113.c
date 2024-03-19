#include <stdio.h>
int main(){
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    
    int so1,so2,so3,so4;
    so1=x+r;
    so2=x-r;
    so3=y+r;
    so4=y-r;
    if(H>=so3&&0<=so4){
        if(W>=so1&&0<=so2){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }else{
        printf("No\n");
    }
    
    return 0;
}
