#include<stdio.h>
int h,a;
int main(){
    scanf("%d%d",&h,&a);
    printf("%d",h%a==0?h/a:h/a+1);
    return 0;
}