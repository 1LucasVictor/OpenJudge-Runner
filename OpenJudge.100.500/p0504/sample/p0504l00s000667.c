#include <stdio.h>
int main(void){
    int h,a,i,ans = 0;
    scanf("%d", &h);
    scanf("%d", &a);
    for(i = h;i > 0;i -= a){
        ans ++;
    }
    printf("%d\n", ans);
    return 0;
}