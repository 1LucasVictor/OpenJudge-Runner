#include <stdio.h>
int main(){
    int n,x,y;
    scanf("%d",&n);
    for(x=3;x<=n;x++){
        
        if(x%3==0){
            printf(" %d",x);
        }
        
    else{
        for(y=x;y!=0;y/=10){
            if(y%10==3){
                printf(" %d",y);
                break;
            }
        }
    }    
        
        
    }
    printf("\n");
    return 0;    
}