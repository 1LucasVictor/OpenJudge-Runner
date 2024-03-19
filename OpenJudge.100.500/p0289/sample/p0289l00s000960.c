#include<stdio.h>
int main(){
    int x,y,d;
    scanf("%d%d",&x,&y);
    
    if(x>=y){
        while(y !=0){
            d=y;
            y=x%y;
            x=d;            
        }
        printf("%d\n",x);
    }
    
    else{
        while(x != 0){
            d=x;
            x=y%x;
            y=d;
        }
        printf("%d\n",y);
    }
    return 0;
}
