#include <stdio.h>

int main(void){
    int x, fh, ov, fy, hap;
    scanf("%d",&x);
    fh = x / 500; ov = x % 500; fy = ov / 5;
    hap = fh * 1000 + fy * 5;
    printf("%d",hap);
    return 0;
}