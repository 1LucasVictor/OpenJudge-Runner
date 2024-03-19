#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


int main(){
    int ret,tmp=0;
    int x=0,y=0;

    scanf("%d %d",&x,&y);

    /*while(!(d>x)&&!(d>y)){
        if(x%d==0&&y%d==0){
            ret=d;
        }
        d++;
    }*/

    if(x>y){
        tmp=y;
        y=x;
        x=tmp;
    }
    while(true){
        tmp=y%x;
        if(tmp==1){
            ret=tmp;
            break;
        }
        else if(tmp==0){
            ret=x;
            break;
        }
        y=x;
        x=tmp;
    }


    printf("%d\n",ret);
    return 0;
}

