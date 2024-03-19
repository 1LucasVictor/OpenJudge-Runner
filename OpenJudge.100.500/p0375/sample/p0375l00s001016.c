#include<stdio.h>
int main(void){
    int a;
    int i;
    int f;
    scanf("%d",&a);
    int b;
    for(i=1;i<=a;i++){
        if(i%3==0){
            f=1;
        }
        for(b=i;b>=3;b+=0){
            if(b%10==3){
                f=1;
            }
            b = b/10;
        }
        if(f==1){
            printf(" %d",i);
            f=0;
        }
    }
    printf("\n");
    return 0;
}