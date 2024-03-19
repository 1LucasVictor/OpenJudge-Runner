#include <stdio.h>
int main(){
    int X, Y;
    scanf("%d %d", &X, &Y);
    if(Y<2*X){
        printf("No");
    }else if(4*X<Y){
        printf("No");
    }else if(((Y-2*X)%2==0)&&((4*X-Y)%2==0)){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}