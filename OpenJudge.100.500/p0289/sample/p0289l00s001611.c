#include<stdio.h>

int main(void){
    int x,y,r;
    scanf("%d",&x);
    scanf("%d",&y);
    
    r=x%y;
    x=y%r;
    while(x>0){
        y=r;
        r=x;
        x=y%r;
    }
    printf("%d",r);
    
    return(0);
}
