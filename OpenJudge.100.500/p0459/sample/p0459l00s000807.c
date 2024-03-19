#include <stdio.h>
int main(void){
    int x, y;
    double c, t;
    scanf("%d%d", &x, &y);
    c = (4 * x - y) / 2.0;
    t = (y - 2 * x) / 2.0;
    if(c>=0 && t >=0 && c-(int)c==0 && t-(int)t==0){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}