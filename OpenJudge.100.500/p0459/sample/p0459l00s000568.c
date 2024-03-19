#include<stdio.h>
signed main(){
    int x,y,i;
    scanf("%d %d",&x,&y);
    if(y<=x*4)
    for(i=0;x<=y;i++){
        y=y-2;

    }
    if(y==0 || y==2){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return(0);
}