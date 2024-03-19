#include <stdio.h>

int main(void){
    
    int d,n,x;
    x=1;
    scanf("%d %d",&d,&n);
    
    for(int i=0; i<d; i++){
        x*=100;
    }
    printf("%d",x*n);
}
