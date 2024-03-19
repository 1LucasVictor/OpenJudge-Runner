#include<stdio.h>

int main(void){
    int x;

    scanf("%d",&x);

    int f = x/500;

    int ff = (x-f*500)/5;
    int ans = f*1000+ff*5;
    printf("%d",ans);


    return 0;
}