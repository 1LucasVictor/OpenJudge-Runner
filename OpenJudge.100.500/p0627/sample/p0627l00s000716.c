#include <stdio.h>
int main(void){
    int a, b, wa, sa, se;
    scanf("%d%d", &a, &b);
    wa = (a + b);
    sa = (a - b);
    se = (a * b);
    if(wa < sa){
        if(sa < se){
            printf("%d", se);
        }else{
            printf("%d", sa);
        }
    }else if(wa < se){
        if(sa < se){
            printf("%d", se);
        }else{
            printf("%d", sa);
        }
    }else{
        printf("%d", wa);
    }
    
}