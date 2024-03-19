#include<stdio.h>
int main(void){
    int x,a,b;
    scanf("%d %d %d",&x,&a,&b);
    if(b-a>x){
        printf("dangerous\n");
    }
    else if(b-a>0&&b-a<=x){
        printf("safe\n");
    }
    else if(b-a<=0){
        printf("delicious\n");
    }
    return 0;
}