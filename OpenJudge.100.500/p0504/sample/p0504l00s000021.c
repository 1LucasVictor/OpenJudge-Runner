#include <stdio.h>

int main(void){
    int h,a,n;
    
    scanf("%d%d",&h, &a);

    if(h%a == 0){
        n=h/a;
        printf("%d",n);
    }

    else if(h%a!=0){
        n=h/a;
        printf("%d",n+1);
    }

    return 0;

}