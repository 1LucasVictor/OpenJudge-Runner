#include <stdio.h>

int main(void)
{
    int x,y;

    scanf("%d%d",&x,&y);
    if(y%2==1){
        printf("No");
    } else if(y>x*4){
        printf("No");
    } else if(y<x*2){
        printf("No");
    }else {
        printf("Yes");
    }

    return 0;
}