#include <stdio.h>
int main(void){
    int a, b, c, ans;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    ans = c-(a-b);
    if (ans<0){
        printf("0\n");
    }
    else {
        printf("%d", ans);
    }

    return 0;
}
