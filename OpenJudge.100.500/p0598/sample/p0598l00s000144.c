#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d%d",&a,&b);
    int ans = 0;
    if(b % a == 0){
        ans = a + b;
    } else {
        ans = b - a;
    }
    printf("%d",ans);
}