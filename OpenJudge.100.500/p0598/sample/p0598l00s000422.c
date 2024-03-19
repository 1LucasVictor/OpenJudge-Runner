#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(b%a==0 || a==b){
        printf("%d", a+b);
    }else{
        printf("%d", b-a);
    }
    return 0;
}