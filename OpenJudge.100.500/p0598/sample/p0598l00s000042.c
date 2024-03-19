#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(b%a==0 || b%a==1 && b>a){
        printf("%d", a+b);
    }else{
        printf("%d", b-a);
    }
    return 0;
}