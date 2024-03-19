#include <stdio.h>

int divisor(int,int);
int main(){
    int x,y,dMax;
    
    scanf("%d %d",&x,&y);
    
    if(x>y){
        dMax = divisor(x,y);
    }else{
        dMax = divisor(y,x);
    }
    
    printf("%d\n",dMax);
    return 0;
}

int divisor(int x,int y){
    int a,dMax;
    
    while(y>0){
        a = x%y;
        x = y;
        y = a;
    }
    
    return x;
}

