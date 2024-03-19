#include <stdio.h>

int main(){
    int a, x;
    0 <= a <= 9;
    0 <= x <= 9;

    scanf("%d %d", &x, &a);
    if(x < a){
        printf("%d", 0);
    }else if(a <= x){
        printf("%d", 10);
    }
    return 0;
}    
