#include<stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(0<=a,b,c,d<=100){//条件に合わせる
        if(b<=c){
            printf("0/n");
        }
        if(b>c){
            if(b<=d){
                printf("%d",b-c);
            }
            else{
                printf("%d",d-c);
            }
        }
    }
    return 0;
}