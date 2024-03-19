#include<stdio.h>
int main(){
    int W,H,x,y,r;
    scanf("%d%d%d%d%d",&W,&H,&x,&y,&r);
    if(0<!W||0<!H||r>100||x<0||y<0){
        printf("No\n");
    }else if(x+r<=W&&y+r<=H){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}