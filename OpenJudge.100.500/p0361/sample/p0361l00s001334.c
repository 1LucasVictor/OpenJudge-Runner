#include <stdio.h>

int main(void){
    int in_s, out_h, out_m, out_s;
    scanf("%d",&in_s);
    out_s = in_s % 60;
    out_m = in_s / 60;
    out_h = out_m /60;
    out_m %= 60;
    printf("%d:%d:%d\n",out_h,out_m,out_s);
    return 0;
}
