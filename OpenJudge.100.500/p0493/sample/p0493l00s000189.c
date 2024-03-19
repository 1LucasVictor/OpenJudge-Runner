#include<stdio.h>
int main()
{
    int x, hp = 0;
    scanf("%d",&x);
    if(x>=500){
        while(x>=500){
            x = x - 500;
            hp = hp + 1000;
        }
    }
    if(x >= 5){
        while(x >= 5){
            x = x-5;
            hp = hp+5;
        }
    }
    printf("%d",hp);
    return 0;
}
