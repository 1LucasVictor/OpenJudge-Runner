#include <stdio.h>
int main(void){
    int h,a,l,l2;
    scanf("%d%d",&h,&a);
    l = h/a;
    l2 = h%a;
    if(l2 == 0){
    printf("%d",l);
    }else{
    printf("%d",l+1);
    }
}