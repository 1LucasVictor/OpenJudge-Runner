#include<stdio.h>

int main(){
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a > 9 || b > 9){
        printf("-1");
    }else{
        a = a*b;
        printf("%d", a);
    }
    
    return 0;
}