#include <stdio.h>

int main(){
    int x,y,tmp = 0;

    scanf("%d%d",&x,&y);
    while(1){
        if((x%y)==0){
            break;
        }
        else{
            tmp = y;
            y = x%y;
            x = tmp;
        }
    }
    printf("%d",y);
    return 0;
}
