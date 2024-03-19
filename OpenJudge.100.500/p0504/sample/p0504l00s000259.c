#include<stdio.h>
int main(void){
    int h,a;
    scanf("%d %d",&h,&a);
    if(h%a==0)
    printf("%d",h/a);
    else
    printf("%d",h/a+1);
    return 0;
}