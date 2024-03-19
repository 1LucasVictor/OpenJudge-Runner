#include<stdio.h>
int main(void){
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c = a+b;
    if(c <= 16){
        if(a <= 8 && b <= 8){
            printf("Yay!");
        }else{
            printf(":(");
        }
        }else{
            printf(":(");
    }
    return 0;
}