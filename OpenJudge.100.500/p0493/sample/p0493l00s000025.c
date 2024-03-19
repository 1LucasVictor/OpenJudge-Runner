#include<stdio.h>
int main()
{
    int x,u=0;
    scanf("%d",&x);
    while(x>=500){
        u+=1000;
        x-=500;
    }
    while(x>=5){
        u+=5;
        x-=5;
    }
    printf("%d\n",u);
    return 0;
}