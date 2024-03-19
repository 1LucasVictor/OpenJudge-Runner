#include <stdio.h>

int main(void) {
    int a,b;
    int ans = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    if(b == 1) {
        printf(0);
    }else{
        while(b>0) {
            ans += 1;
            b -= a;
        }
    }
    printf("%d\n",ans);
    return 0;
    }