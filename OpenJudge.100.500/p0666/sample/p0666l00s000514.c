#include <stdio.h>
int main(void){
    int a,b,x;
    scanf("%d%d%d",&x,&a,&b);
    if( a>b){
        printf("delicious");
    }
    else if(x + 1<b - a){
        printf("dengerous");
    }
    else{
        printf("safe");
    }
        
}
