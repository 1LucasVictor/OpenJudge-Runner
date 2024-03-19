#include <stdio.h>
int main(void){
    int X,Y,i,kameflag=0,tsuruflag=0;
    double tsuru,kame;
    
    scanf("%d",&X);
    scanf("%d",&Y);
    
    kame=-(X)+Y/2;
    tsuru=-(Y)/2+2*X;
    
    for(i=0;i<=X;i++){
        if(kame==i){
            kameflag=1;
        }
    }
    for(i=0;i<=X;i++){
        if(tsuru==i){
            tsuruflag=1;
        }
    }
    
    if(kameflag==1 && tsuruflag==1){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    
    return 0;
}