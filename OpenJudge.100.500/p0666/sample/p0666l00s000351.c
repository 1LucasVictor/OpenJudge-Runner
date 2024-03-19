#include<stdio.h>

int main(){
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    if(b<=a){printf("delicious\n");}
    if(b>a&&b<=a+x){printf("safe\n");}
    if(b>a+x){printf("dangerous\n");}
    return 0;
}