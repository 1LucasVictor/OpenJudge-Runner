#include <stdio.h>
int main(void){
    int a, cnt = 0;
    scanf("%d", &a);
    
    while(a > 0){
        if (a % 2 == 1){
            cnt++;
        }
        a /= 10;
    }
    printf("%d", cnt);
    return 0;
}