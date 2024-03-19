#include<stdio.h>

int main(void){
    int gcd,x,y,tmp;
    
    scanf("%d %d",&x,&y);
    
    if(x<y){
        tmp=x;
        x=y;
        y=tmp;
    }
    
    while((gcd=x%y)!=0){
        x=y;
        y=gcd;
    }
    printf("%d\n",y);
    
    return 0;
}
