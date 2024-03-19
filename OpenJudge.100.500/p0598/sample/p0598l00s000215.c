#include <stdio.h>
int main(void){
    int a, b, flag;
    scanf("%d%d", &a, &b);
    flag=b%a;
    if(flag){
        printf("%d\n", b-a);
    }else{
        printf("%d\n", a+b);
    }
    
    return 0;
}