#include<stdio.h>
int main(void)
{
    int n;
    int a;
    scanf("%d",&n);
    if(10<=n && n<100){
        a=n%10;
        if(a==2 ||a==4 ||a==5 ||a==7 ||a==9){
            printf("hon\n");
        }else if(a==3){
            printf("bon\n");
        }else{
            printf("pon\n");
        }
    }else{
        a=n%100;
        a=a%10;
        if(a==2 ||a==4 ||a==5 ||a==7 ||a==9){
            printf("hon\n");
        }else if(a==3){
            printf("bon\n");
        }else{
            printf("pon\n");
        }
    }
    return 0;
}