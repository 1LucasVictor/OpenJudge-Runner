#include <stdio.h>

int main(){
    int x,a,*p,*q;
    
    scanf("%d %d",&x,&a);
    
    p=&a;
    q=&x;
    
    if(*q<*p){
        printf("0\n");
    }
    
    else{
        printf("10\n");
    }
    
    
    
    return 0;
}