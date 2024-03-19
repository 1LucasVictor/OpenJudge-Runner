#include<stdio.h>

int main(){
    int x,y,z;
    scanf("%d%d",&x,&y);
    
    if(y>x){
        z = y;
        y = x;
        x = y;
    }
    
    while(1){
        z = x % y;
        if(z == 0) break;
        x = y;
        y = z;
    }
    printf("%d",y);
    
}
