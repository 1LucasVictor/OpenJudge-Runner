#include<stdio.h>
int main(){
    int a, ans = 0;
    scanf("%d", &a);
    ans += a / 100;
    ans += (a % 100) / 10;
    ans += a % 10;
    printf("%d\n", ans);
    return 0;
}