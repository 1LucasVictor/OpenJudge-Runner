#include<stdio.h>
int main(){
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    if(y+r>H||x+r>W){
    printf("No\n");
    }
    else printf("Yes\n");
}