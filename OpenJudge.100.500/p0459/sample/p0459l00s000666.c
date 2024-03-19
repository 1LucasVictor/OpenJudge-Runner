#include<stdio.h>

int main(void){

    int X, Y;
    scanf("%d %d", &X, &Y);

    if(2*X>Y||4*X<Y||Y%2==1){
        printf("No");
    }
    else{
        printf("Yes");
    }

    return 0;
}