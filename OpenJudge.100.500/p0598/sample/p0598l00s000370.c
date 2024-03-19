#include <stdio.h>
int main(void){
    int a, b, ans = 0;
    
    scanf("%d %d", &a, &b);
    
    if(b%a != 0){
        ans = b - a;
    }else if(b%a == 0){
        ans = a + b;
    }
    
    printf("%d\n", ans);
    
}
